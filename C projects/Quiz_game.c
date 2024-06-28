#include<stdio.h>
int main(){
int i;
int ANS1, ANS2, ANS3, ANS4, ANS5;
int POINT1, POINT2, POINT3, POINT4, POINT5;
int result;

printf("HELLO PLAYER!! welcome to quiz game you have to ans all upcoming 5 questions correctly to win the game, each correct ans awards 5 points and 0 points on wrong answer...\n\n\n");
printf(">ENTER 7 TO START THE GAME!\n");
printf(">ENTER 0 TO END THE GAME!");
scanf("%d",&i);
if(i==7){

    printf("The game has started. Please answer the following questions\n");
}
else if(i==0){
    printf("The game has ended!!");
}
else{
    printf("Invalid no entered");
}

if(i==7){
    printf("1.Which team won the ICC cricket world cup 2023?\n");
    printf("1.India\n"); 
    printf("2.Australia\n");
    printf("3.West indies\n");
    printf("4.USA\n");
    printf("Enter your ans:");
    scanf("%d",&ANS1);
    if(ANS1 ==2){
    printf("congrats!! your ans is correct.\n");
    POINT1=5;
    printf("your score is %d\n", POINT1);
    }
    else{
        printf("oops!! wrong answer\n");
        POINT1=0;
        printf("your score is %d\n", POINT1);
    }
    printf("2.Which cloth type is preffered by Gandhiji?\n");
    printf("1.Khadi\n"); 
    printf("2.Jute\n");
    printf("3.Muslin\n");
    printf("4.Nylon\n");
    printf("Enter your ans:");
    scanf("%d",& ANS2);
    if(ANS2 ==1){
    printf("congrats!! your ans is correct.\n");
    POINT2=5;
    printf("your score is %d\n" , POINT2);
    }
    else{
        printf("oops!! wrong answer\n");
        POINT2=0;
        printf("your score is %d\n", POINT2);
    }
    
    printf("3.When is world's Environment day?\n");
    printf("1.6 july\n"); 
    printf("2.5 june\n");  
    printf("3.5 july\n");  
    printf("4.25 june\n");  
    printf("Enter your ans:");
    scanf("%d",&ANS3);
    if(ANS3 ==2){
    printf("congrats!! your ans is correct.\n");
    POINT3=5;
    printf("your score is %d\n", POINT3);
    }
    else{
        printf("oops!! wrong answer\n");
        POINT3=0;
        printf("your score is %d\n",POINT3);
    }
    printf("4.Which of the following movie is acted by Hritik Roshan?\n");
    printf("1.Super 30\n");
    printf("2.Baby\n"); 
    printf("3.Raid\n"); 
    printf("4.Pink\n");
    printf("Enter your ans:");
    scanf("%d",& ANS4);
    if(ANS4 ==1){
    printf("congrats!! your ans is correct.\n");
    POINT4=5;
    printf("your score is %d\n",POINT4);
    }
    else{
        printf("oops!! wrong answer\n");
        POINT4=0;
        printf("your score is %d\n",POINT4);
    }
    printf("5.Which actress is wife of actor Sidharth Malhotra?\n");
    printf("1.Kriti Sanon \n");
    printf("2.Deepika Padukone\n");
    printf("3.Alia Bhatt\n");
    printf("4.Kiara Advani\n"); 
    printf("Enter your ans:");
    scanf("%d",& ANS5);
    if(ANS5 ==4){
    printf("congrats!! your ans is correct.\n");
    POINT5=5;
    printf("your score is %d\n", POINT5);
    }
    else{
        printf("oops!! wrong answer\n");
        POINT5=0;
        printf("your score is %d\n",POINT5);
    }
   printf("CONGRATULATIONS!! YOU HAVE SUCCESSFULLY COMPLETED THE QUIZGAME\n");
   result = POINT1+POINT2+POINT3+POINT4+POINT5;
   printf("Your final score is %d out of 25",result);
   
}
printf("---------------------------------\n");
printf("Developed by: KKcoding...");

return 0;
}
