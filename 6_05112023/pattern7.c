/*  
#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=2*n-1;j++){
            if(j<=n-i)
                printf(" ");
            else if(j<=n+i-1)
                printf("*");
        }
        printf("\n");
    }
    return 0;
} */

//code with for loop only
#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int j=1;
        for(;j<=n-i;j++)
            printf(" ");
        for(;j<=n+i-1;j++)
            printf("*");
        printf("\n");
    }
    return 0;
}