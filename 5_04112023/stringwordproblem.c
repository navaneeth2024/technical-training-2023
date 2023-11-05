/*notes problem 4*/
#include<stdio.h>
void lower(char a[], int start, int end){
    for(int i=end;i>=start;i--){
        if(a[i]>=65 && a[i]<=90)
            printf("%c",a[i]+32);
        else
            printf("%c",a[i]);
    }
}

void upper(char a[], int start, int end){
    for(int i=end;i>=start;i--){
        if(a[i]>=97 && a[i]<=122)
            printf("%c",a[i]-32);
        else
            printf("%c",a[i]);
    }
}

int main(){
    char a[100];
    int start =0,end,count=0;
    scanf("%[^\n]s",&a);
    for(int i=0;a[i]!='\0';i++){
        if(a[i+1]==' ' ||a[i+1]=='\0'){
            end=i;
            count++;
            if(count%2!=0){
                upper(a,start,end);
                printf("\t");
            }
            else{
                lower(a,start,end);
                printf("\t");
            }
            start=i+2;
        }
    }
}