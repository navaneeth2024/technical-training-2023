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
    for(int i=n-1;i>=1;i--){
        int j=1;
        for(;j<=n-i;j++)
            printf(" ");
        for(;j<=n+i-1;j++)
            printf("*");
        printf("\n");
    }
    return 0;
}