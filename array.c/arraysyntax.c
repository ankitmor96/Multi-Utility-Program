/*#include<stdio.h>

int main(){
    // static array 
    int num [5] = {2,4,6,8,5};

    int number [5] = {};

    number[0]= 2;
    number[1]= 4;
    number[2]= 6;
    number[3]= 8;
    number[4]= 5;

    printf("%d",number[4]);

  
     return 0;
}*/
#include<stdio.h>

 int main(){

int num [5] = {};

    printf("enter your first element of  an array \n");
    scanf("%d",&num[0]);

     printf("enter your first element of  an array \n");
    scanf("%d",&num[1]);

     printf("enter your first element of  an array \n");
    scanf("%d",&num[2]);

     printf("enter your first element of  an array \n");
    scanf("%d",&num[3]);

     printf("enter your first element of  an array \n");
    scanf("%d",&num[4]);

     printf("your firrst element of an array: %d",num[2]);


    return 0;
 }