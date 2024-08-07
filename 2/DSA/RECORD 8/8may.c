//wap to create circular linked list
#include<stdio.h>
#include<stdlib.h>
struct node
{
    
    struct node *pre;
    int data;
    struct node *next;
};
struct node *head,*temp,*newnode;
void create(){
    head=NULL;
    int choice=1;
    while (choice)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("\nenter the data : ");
        scanf("%d",&newnode->data);
        newnode->pre=NULL;
        newnode->next=NULL;
        if(head==NULL){
            head=temp=newnode;
        }else{
            temp->next=newnode;
            newnode->pre=temp;
            temp=newnode;
        }
        printf("enter 1 for continue and 0 for return : ");
        scanf("%d",&choice);
    }
    
}
void display(){
    temp=head;
    while (temp->next!=NULL)
    {
        printf("%d ",temp->data);
       temp=temp->next;
    }
    printf("%d",temp->data);
}
int main(){
    create();
    display();
}