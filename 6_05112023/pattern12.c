#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[2*n-1][2*n-1];
    int val=n;

    int rowstart=0,rowend=2*n-2,colstart=0,colend=2*n-2;

    while(rowstart!=rowend){
        for(int i=colstart;i<=colend;i++)
            a[rowstart][i]=val;
        rowstart++;

        for(int i=rowstart;i<=rowend;i++)
            a[i][colend]=val;
        colend--;

        for(int i=colend;i>=colstart;i--)
            a[rowend][i]=val;
        rowend--;

        for(int i=rowend;i>=rowstart;i--)
            a[i][colstart]=val;
        colstart++;

        val--;
       
    }
    a[rowstart][rowend]=val;
    for(int i=0;i<(2*n-1);i++){
        for(int j=0;j<(2*n-1);j++)
            printf("%d",a[i][j]);
        printf("\n");
    }
}