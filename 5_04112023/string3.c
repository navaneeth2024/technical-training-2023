/*To print string until length-1*/
#include<stdio.h>
int main(){
    char a[100];
    gets(a);
    int start=0,end;

    for(int i=0;a[i]!='\0';i++){
        if(a[i]==' '|| a[i+1]=='\0'){
            end=i;
            for(int k=start;k<=end;k++)
                printf("%c",a[k]);
            printf("\n");
            start=i+1;
        }
    }
}