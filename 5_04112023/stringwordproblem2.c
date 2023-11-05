/*notes prblem 5. Print a 10 times, b 2 times, c 12 times*/
#include<stdio.h>
int main(){
    char a[100];
    scanf("%s",a);
    char ch;
    int num=0;
    for(int i=0;a[i]!='\0';i++){
        if(a[i]>=48 && a[i]<=57){
            num=num*10 + a[i]-48;
            if((a[i+1]>=97 && a[i+1]<=122) || (a[i+1]>=65 && a[i+1]<=90) ||a[i+1]=='\0'){
                for(int k=1;k<=num;k++)
                    printf("%c",ch);
            num=0;
            }
        }
        else{
            ch=a[i];
        }
    }
}