#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
int i, user_no, random_no, attempt=0;
srand(time(NULL));
printf("Welcome to world of guessing numbers!!\n");
random_no = rand()%100 + 1; //generating no between 0 to 100
printf("Enter any no to start game!!\n");
printf("Enter 0 to exit game!!\n");
 scanf("%d\n",i);
      if(i==0){
  printf("You have exited the game!!\n");
 }

 else{
        do{
    printf("Guess no between 0 to 100:");
    scanf("%d\n",user_no);
    attempt ++;

    if(user_no<random_no){
        printf("Guess a larger no...");
    }
    else if(user_no>random_no){
        printf("Guess a smaller no...");
    }
    else{
        printf("CONGRATULATIONS!! YOU HAVE GUESSED THE CORRECT NUMBER IN %d attempts!! \n",attempt);
        printf("Your score is %d", attempt);
    } 

       }
       while(user_no != random_no);
 }

 
 printf("Thanks!!\n");
 printf("-----------------------------------\n");
 printf("Developed by KKcoding....");



//  else{
//  printf("Enter 7 or 0");
//  }

    return 0;
}