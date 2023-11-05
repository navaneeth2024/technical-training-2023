#include<stdio.h>
int main(){
    char a[100];
    //scanf("%[^\n]s",&a);  //scans until new line
    scanf("%[^.]s",&a);  //scans until . is reached
    //scanf("%[^A-Z]s",&a);  //scans until capital letter is reached
    printf("%s",a);
}