#include<stdio.h>
int main(){
    char a[100];
    scanf("%s",a);  //scans until space or newline
    scanf("%[^user_DEF]s",a);   //scans untilmentioned value
    scanf("%[user_def,user_def]s",a);  //scans only mentioned value
    get(a);     //scans until new line
    fgets(a,14,stdin);     //scans until 13th character
    printf("%s",a);
}