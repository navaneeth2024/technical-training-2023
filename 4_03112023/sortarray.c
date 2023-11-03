/*To sort an array into prime, even and odd numbers*/
#include<stdio.h>
int main(){
    int size;
    scanf("%d",&size);
    int a[size];
    for(int i=0;i<size;i++)
        scanf("%d",&a[i]);
    int flag=0;
    for(int i=0;i<size;i++){
        for(int j=2;j<=a[i]/2;j++){
            if(a[i]%j==0){
                flag=1;
                break;
            }
        }
        if(flag==0 && a[i]!=1){
            printf("%d ",a[i]);
            a[i]=3;
        }
        flag=0;
    }
    for(int i=0;i<size;i++){
        if(a[i]%2==0){
            printf("%d ",a[i]);
        }
    }
    for(int i=0;i<size;i++){
        if(a[i]%2!=0 && a[i]!=3){
            printf("%d ",a[i]);
        }
    }
}