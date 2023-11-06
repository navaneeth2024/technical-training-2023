#include<stdio.h>
#include<stdlib.h>
struct node
    {
        int num;
        struct node *next;
    };
int main() {
    struct node *head;
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode -> num=10;
    newnode -> next=NULL;

    head = newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode -> num=20;
    newnode -> next=NULL;

    head -> next=newnode;

    printf("%d ",head->num);
    printf("%d",head->next->num);
    return 0;
}