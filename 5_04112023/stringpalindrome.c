#include<stdio.h>
int main(){
    char a[100];
    gets(a);
    int start=0,end;

    for(int i=0;a[i]!='\0';i++){
        if(a[i]==' '|| a[i+1]=='\0'){           //i=12 start
            end=i;
            if(ispal(a,start,end)){
                for(int k=start;k<=end;k++)
                    printf("%c",a[k]);
            }
            start=i+2;
        }
    }
}