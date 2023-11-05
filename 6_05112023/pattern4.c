#include<stdio.h>
int main() {
    int n=0;
    char a[100];
    scanf("%s",&a);
    for(int i=0;a[i]!='\0';i++)
        n=n+1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==j || (i+j)==(n+1))
                printf("%c",a[j-1]);
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}