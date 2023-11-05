#include<stdio.h>
int main(){
    char a[5][5]={"ilove","onsaz","ighso","tuoth","seuqo"};
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++)
            printf("%c ",a[i][j]);
        printf("\n");
    }
    int rowstart=0,rowend=4,colstart=0,colend=4;
    while(rowstart!=rowend){
        for(int k=colstart;k<=colend;k++)
            printf("%c",a[rowstart][k]);
        rowstart++;

        for(int k=rowstart;k<=rowend;k++)
            printf("%c",a[k][colend]);
        colend--;

        for(int k=colend;k>=colstart;k--)
            printf("%c",a[rowend][k]);
        rowend--;

        for(int k=rowend;k>=rowstart;k--)
            printf("%c",a[k][colstart]);
        colstart++; 
    }
    printf("%c",a[rowstart][rowend]);
}