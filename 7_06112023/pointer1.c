#include<stdio.h>
int main() {
    int *ptr,**ptr1,***ptr2;
    int a=12;
    ptr2=&ptr1;
    ptr1=&ptr;
    ptr=&a;
    printf("%d %d",***ptr2,a);
    return 0;
}