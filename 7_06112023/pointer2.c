#include<stdio.h>
#include<stdlib.h>
int main() {
    int *ptr;
    ptr=(int*)malloc(5*sizeof(int));
    ptr=(int*)calloc(5,sizeof(int));
    for(int i=0;i<5;i++)
        scanf("%d",ptr+i);
    for(int i=0;i<5;i++)
        scanf("%d\n",*(ptr+i));
    printf("reallocate memory to 10\n");
    ptr=realloc(ptr,10*sizeof(int));
    for(int i=0;i<5;i++)
        scanf("%d",*(ptr+i));
    free(ptr);
    printf("\nafter freeing memory\n");
    for(int i=0;i<5;i++)
        scanf("%d\n",*(ptr+i));
}