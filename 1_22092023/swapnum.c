//c program to swap 2numbers without using 3rd variable
//use addition or any other arithmetic operator
#include<stdio.h>
int main(){
    int x,y;
    printf("Enter value for x & y:");
    scanf("%d%d",&x,&y);
    printf("Before swapping x=%d and y=%d \n",x,y);
    
    /*swapping using arithmetic operation
    x=x+y;
    y=x-y;
    x=x-y;
    printf("After swapping x=%d and y=%d",x,y);*/

    /*swapping using xor operator 
    x=x ^ y;
    y=x ^ y;
    x=x ^ y;
    printf("After swapping x=%d and y=%d",x,y);*/

    //swapping using single-line command 
    x=x+y-(y=x);
    printf("After swapping x=%d and y=%d",x,y);
    return 0;
}