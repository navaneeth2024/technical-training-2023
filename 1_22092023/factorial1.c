//fcatorial using recursion
#include<stdio.h>
int factorial(int num){
    if(num==0)
        return 1;
    else
        return num*factorial(num-1);
}
int main(){
    int n,fact=1;
    printf("Enter number:");
    scanf("%d",&n);
    printf("Factorial of %d is %d",n,factorial(n) );
    return 0;
}