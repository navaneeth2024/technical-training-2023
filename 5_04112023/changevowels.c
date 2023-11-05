/*Change vowels to their next alphabet and if the same vowel appears again change to its previous alphabet*/
#include<stdio.h>
int main(){
    char a[100];
    scanf("%[^\n]s",a);
    int count;
    for(int i=0;a[i]!='\0';i++){
        if(a[i]=='A'||a[i]=='a'||a[i]=='E'||a[i]=='e'||a[i]=='I'||a[i]=='i'||a[i]=='O'||a[i]=='o'||a[i]=='U'||a[i]=='u'){
        count=count+1;
        if(count%2!=0)
            printf("%c",a[i]+1);
        else{
            if(a[i]=='a' || a[i]=='A')
                printf("%c",a[i]+25);
            else
                printf("%c",a[i]-1);
            }        
        }
        else
            printf("%c",a[i]);
    }
}
