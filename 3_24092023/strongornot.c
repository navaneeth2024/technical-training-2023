#include<stdio.h>
int factorial(int num){
    if(num==0)
        return 1;
    else
        return num*factorial(num-1);
}  
int main(){
    int num,temp,sum=0,d;
    printf("Enter the number:");
    scanf("%d",&num);
    temp=num;
    while(temp>0){
        d=temp%10;
        sum=sum+factorial(d);
        temp=temp/10;
    }
    if(num==sum)
        printf("%d is strong number.",num);
    else
        printf("%d is not strong number.",num);
    return 0;
}