//add two numbers without using arithmetic operators

#include<stdio.h>
#include<conio.h>
int main(){
    int num1,num2,i;
    printf("Enter 1st num:");
    scanf("%d",&num1);
    printf("Enter 2nd num:");
    scanf("%d",&num2);
    for(i=1;i<=num2;i++){
        num1++;
    }
    printf("Sum=%d",num1);
    getch();
    return 0;
}