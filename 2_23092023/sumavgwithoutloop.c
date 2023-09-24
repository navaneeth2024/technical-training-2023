#include<stdio.h>
int sum(int n){
    if(n==0)
        return 0;
    else{
        int current;
        printf("Enter the number:");
        scanf("%d",&current);
        return current+sum(n-1);
    }
}
int main(){
    int num,limit,total;
    float avg;
    printf("Enter the limit:");
    scanf("%d",&limit);
    total=sum(limit);
    printf("Sum= %d\n",total);
    avg=total/limit;
    printf("Average =%f",avg);
    return 0;
}