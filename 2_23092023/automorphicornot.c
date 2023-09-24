#include<stdio.h>
int main(){
    int num,temp,sqr,i,count=0,divisor=1;
    printf("Enter the number:");
    scanf("%d",&num);
    sqr=num*num;
    temp=num;
    while(temp>0){
        count++;
        temp/=10;
    }
    for(int i=0;i<count;i++)
        divisor*=10;
    if(sqr%divisor==num)
        printf("%d is an automorphic number.",num);
    else
        printf("%d is not an automorphic number.",num);
    return 0;
}