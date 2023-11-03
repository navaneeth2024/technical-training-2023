#include<stdio.h>
int main(){
    int size;
    scanf("%d",&size);
    int a[size];

    for(int i=0;i<size;i++)
        scanf("%d",&a[i]);
    int rotation;
    scanf("%d",&rotation);
    char ch;
    scanf("%c",&ch);

    for(int j=1;j<=2;j++){
        int temp=a[0];
        for(int i=0;i<size-1;i++)
            a[i]=a[i+1];
        a[size-1]=temp;
    }

    for(int i=0;i<size;i++)
        printf("%d",a[i]);
}