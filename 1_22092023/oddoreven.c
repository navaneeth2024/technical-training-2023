#include<stdio.h>
int main(){
    int x;
    printf("Enter number:");
    scanf("%d",&x);
    if(x%2==0)
        printf("%d is even number.",x);
    else
        printf("%d is odd number.",x);
    return 0;
}