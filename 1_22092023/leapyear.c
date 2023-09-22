#include<stdio.h>
int main(){
    int year,checkLeap;
    printf("Enter year:");
    scanf("%d",&year);
    checkLeap=(year%4==0 && year%100!=0 || year%400==0)? 1:0;
    if(checkLeap==1)
        printf("%d is leap year.",year);
    else
        printf("%d is not leap year.",year);
    return 0;
}