// Online C compiler to run C program online

#include<stdio.h>
#include<string.h>
void Create_Account();
void Depositing_Money();
void Withdraw_Money();
void Check_Balance();

const char* ACCOUNT_FILE = "account.dat";
typedef struct{
  char name [50];
  int acc_no;
  float Balance;
}Account;



int main(){
while(1){
    int choice;
    printf("\n\n ***BANK MANAGEMENT SYSTEM***\n");
    printf("\n1.Create account");
    printf("\n2.Deposit Money");
    printf("\n3.Withdraw Money");
    printf("\n4.Check Balance");
    printf("\n5.Exit");
    printf("\nEnter the choice:");
    scanf("%d",&choice);
 switch(choice){
    case 1:Create_Account();
    break;
      case 2:Depositing_Money();
    break;
      case 3:Withdraw_Money();
    break;
      case 4:Check_Balance();
    break;
      case 5:
      printf("\n Closing the bank, Thanks for your visit\n");
    return 0;
    default:printf("Invalid choice!");
    break;
    }
  }
}
void Create_Account(){
  Account acc;
  FILE *file = fopen(ACCOUNT_FILE,"ab+");
  if (file== NULL){
    printf("\nUnable to open file!!");
    return;
  }

  char c;
  do{
    c= getchar();
  } while (c!='\n' && c != EOF);
    
  printf("\nEnter your name:");
  fgets(acc.name, sizeof(acc.name), stdin);
  int ind= strcspn(acc.name,"\n"); // terminating extra spaces in the end of name...
  acc.name[ind]='\0';
  printf("Enter your account no:");
  scanf("%d", &acc.acc_no);
  acc.Balance=0;

  fwrite(&acc,sizeof(acc),1,file);
  fclose(file);
  printf("\nAccount has been created successfully");

}

void Depositing_Money(){
FILE *file= fopen(ACCOUNT_FILE,"rb+");
if (file== NULL){
    printf("\nUnable to open file!!");
    return;
  }
  int acc_no;
  float money;
  Account acc_r;
  printf("\nEnter your account no:");
  scanf("%d",&acc_no);
  printf("Enter amount to deposit:");
  scanf("%f",&money);
  while(fread(&acc_r,sizeof(acc_r),1,file)){
  if(acc_r.acc_no ==acc_no){
    acc_r.Balance= acc_r.Balance + money;
    fseek(file,-sizeof(acc_r),SEEK_CUR);
    fwrite(&acc_r,sizeof(acc_r),1,file);
    printf("Successfully deposited Rs. %.2f New balance is Rs. %.2f",money, acc_r.Balance);
    return;
  }
  }
  fclose(file);
  printf("YOUR ACCOUNT IS NOT IN OUR RECORDS!!");

}



void Withdraw_Money(){
FILE *file=fopen(ACCOUNT_FILE,"rb+");
if (file== NULL){
  printf("\nUnable to open the account file!!!.\n");
  return;
}
int acc_no;
float money;
Account acc_r;
printf("Enter your account no:");
scanf("%d",&acc_no);
printf("Enter the amount you wish to withdraw: ");
scanf("%f",&money);
while (fread(&acc_r, sizeof(acc_r),1, file)){
if (acc_r.acc_no == acc_no){
  if(acc_r.Balance>= money){
    acc_r.Balance-= money;
    fseek(file, -sizeof(acc_r), SEEK_CUR);
    fwrite(&acc_r, sizeof(acc_r),1,file);
    printf("Successfully withdrawn Rs. %.2f Remaining balance is Rs. %.2f",money,acc_r.Balance);
  }
  else{
     printf("Insufficient Balance!");
  }
  fclose(file);
  return;
}

}
printf("YOUR ACCOUNT IS NOT IN OUR RECORDS!!");
}
void Check_Balance(){
 FILE *file= fopen(ACCOUNT_FILE,"rb");
  if (file== NULL){
    printf("\nUnable to open file!!");
    return;
  }
 int acc_no;
 Account acc_read;
printf("Enter your account no:");
scanf("%d", &acc_no);
while(fread(&acc_read, sizeof(acc_read),1,file)){
  if(acc_read.acc_no==acc_no){
      printf("\nYour current balance is Rs. %.2f",acc_read.Balance);
      fclose(file);
       return;
    }
  }
  fclose(file);
  printf("\nAccount no %d was not found!!\n",acc_no);
}