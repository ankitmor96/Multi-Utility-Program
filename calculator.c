#include <stdio.h>

int main() {
   int score;
   char grade;

   printf("enter your score:");
   scanf("%d",&score);

   grade = (score >= 90)? 'A':
           (score >=80)?  'B':
            (score >=70)?  'c':
            (score >=33)?  'd': 'F';

    printf("your grade is %c\n",grade);
    
    
    switch(grade){

         case 'A':
         printf("very very good !\n");
         break;

        case 'B':
         printf("very good !\n");
         break;

        case 'C':
         printf(" good !\n");
         break;

        case 'D':
         printf("pass,but can improve !\n");
         break;

         default:
         printf("sorry failed \n");


    }

       if(score >= 90)
       printf("you are eligibale for the next levle \n");

       else if(score >= 80)
       printf("you are eligibale for the next levle \n");

       else if(score >= 70)
       printf("you are eligibale for the next levle \n");

       else if(score >= 33)
       printf("you are eligibale for the next levle \n");

       else
       printf("not eligibale ,try to next time\n");



    
    
    return 0;
}