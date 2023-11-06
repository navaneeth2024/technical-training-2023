#include<stdio.h>
#include<stdlib.h>

struct node{
    int num;
    struct node *next;
};

void create(int num,struct node **head){
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->num=num;
    newnode->next=NULL;

    if(*head==NULL)
        *head=newnode;
    else
    {
        struct node *tptr=*head;
        while(tptr->next!=NULL)
            tptr=tptr->next;
        tptr->next=newnode;
    }
}

void display(struct node *head){
    struct node *tptr=head;
    while(tptr!=NULL){
        printf("%d\t",tptr->num);
        tptr=tptr->next;
    }
}
int main(){
    struct node *head=NULL;
    create(10,&head);
    create(20,&head);
    create(30,&head);
    create(40,&head);
    create(50,&head);
    display(head);
}