#include<stdio.h>
int main() {
    int n=0,ind;
    char a[100];
    scanf("%s",&a);
    for(int i=0;a[i]!='\0';i++)
        n=n+1;
    for(int i=1;i<=n;i++){
        ind=n/2;
        for(int j=1;j<=n;j++){
            if(j<=n-i)
                printf(" ");
            else{
                if(ind>=n)
                    ind=0;
                printf("%c ",a[ind++]);
            }
        }
        printf("\n");
    }
    return 0;
}


/* #include<stdio.h>
int main() {
    int n=0,ind;
    char a[100];
    scanf("%s",&a);
    for(int i=0;a[i]!='\0';i++)
        n=n+1;
    for(int i=1;i<=n;i++){
        ind=n/2;
        for(int j=1;j<=n;j++){
            if(j<=n-i)
                printf(" ");
            else
                printf("%c ",a[ind++ % n]);
        }
        printf("\n");
    }
    return 0;
} */


