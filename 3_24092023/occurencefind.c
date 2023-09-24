/*C program to print occurrence of a particular digit in a number.*/ 
#include <stdio.h>
int main()
{
    int num,temp,digit,cnt;
    int rem;
 
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("Enter digit to search: ");
    scanf("%d",&digit);

    cnt=0;
    temp=num;
 
    while(temp>0){
        rem=temp%10;
        if(rem==digit)
            cnt++;
        temp/=10;
    }
    printf("Total occurrence of %d is %d in number %d.",digit,cnt,num); 
    return 0;
}