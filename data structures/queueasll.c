#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *link;
};

struct node *front=NULL;
struct node *rear=NULL;

void enqueue(int x)
{
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->link=NULL;

    if(front==0 && rear==0)
    {
        front=rear=newnode;
    }

    else
    {
        rear->link=newnode;
        rear=newnode;
    }
}

void display()
{
   
    struct node *temp;

    if(front==NULL && rear==NULL)
    {
        printf("empty queue\n");
    }
    else
    {
    printf("queue is ");
    temp=front;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->link;
    }
    }
}

void dequeue()
{
    if(front==NULL && rear==NULL)
    {
        printf("empty queue");
    }

    else
    {
        struct node *temp;
        temp=front;
        printf("\n%d is deleted \n",front->data);
        front=front->link;
        free(temp); 
    }

}

int main()
{
    printf("enter a element to queue\n");
    int x;
    scanf("%d",&x);
    enqueue(x); 
    scanf("%d",&x);
    enqueue(x); 
    scanf("%d",&x);
    enqueue(x); 
    display();
    dequeue();
    display();

}