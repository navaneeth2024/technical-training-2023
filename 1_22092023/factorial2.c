//fcatorial using for loop
#include<stdio.h>
int main(){
    int n,i,fact=1;
    printf("Enter a number:");
    scanf("%d",&n);
    /*using for loop                method 1
    for(i=1;i<=n;i++){
        fact=fact*i;
    }
    printf("%d",fact);*/

    /*using do-while loop            method 2
    do{
        fact=fact*i;
        i++;
    }while(i<=n);
    printf("%d",fact);*/

    while(n>10){                    //method3
        printf("Enter a num between 0&10:");
        scanf("%d",&n);
    }
    for(i=1;i<=n;i++){
        fact=fact*i;
    }
    printf("%d",fact);
    
    return 0;
}