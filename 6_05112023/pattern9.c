#include<stdio.h>
int main(){
    int n,val;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        val=i;
        for(int j=1;j<=n+i-1;j++){
            if(j<=n-i)
                printf(" ");
            else{
                if(j<n)
                    printf("%d",val--);
                else
                    printf("%d",val++);
            }
        }
        printf("\n");
    }
        for(int i=n-1;i>=1;i--){
            val=i;
            for(int j=1;j<=n+i-1;j++){
                if(j<=n-i)
                    printf(" ");
                else{
                    if(j<n)
                        printf("%d",val--);
                    else
                        printf("%d",val++);
                }
            }
            printf("\n");
    }
    
}