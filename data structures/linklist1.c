#include<stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};

void printNode(struct node *temp)
{
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->link;
    }
}

    struct node *first=NULL;
    struct node *second=NULL;
    struct node *third=NULL;
    struct node *start=NULL;

void createNode()
{
   
    first=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    start=first;
    first->data=10;
    first->link=second;

    second->data=20;
    second->link=third;

    third->data=30;
    third->link=NULL;
}

void insertAtEnd()
{
    struct node *fourth;
    fourth=(struct node*)malloc(sizeof(struct node));
    fourth->data=40;
    fourth->link=NULL;

    struct node *ptr;
    ptr=start;


    while(ptr->link!=NULL)
    {
        ptr=ptr->link;
    }

    ptr->link=fourth;

}

void insertAtStart()
{
    struct node *fifth;
    fifth=(struct node*)malloc(sizeof(struct node));
    fifth->data=50;
    fifth->link=start;

    struct node *ptr;
    start=fifth;
}

void lengthofLL()
{
    struct node *ptr;
    ptr=start;
    int count=0;

    while(ptr!=NULL)
    {
        
        ptr=ptr->link;
        count++;
    }

    printf("\nthe length of linkedlist is %d",count);

}

void printLastNode()
{
    struct node *ptr=start;
    while(ptr->link!=NULL)
    {
        ptr=ptr->link;

    }

    printf("\nthe last node data is %d\n",ptr->data);

}

void printSecondLastNode()
{
    struct node *ptr=start;
    while(ptr->link->link!=NULL)
    {
        ptr=ptr->link;
    }

     printf("\nthe second last node data is %d\n",ptr->data);


}

void deleteFirstNode()
{
    struct node *ptr=start;
    start=ptr->link;
    ptr->link=NULL;
    free(ptr);
}

void deleteLastNode()
{
    struct node *ptr=start;
    while(ptr->link->link!=NULL)
    {
        ptr=ptr->link;
    }

    struct node *temp;
    temp=ptr->link;

    ptr->link=NULL;

    free(temp);
    
}

void deleteLastNode2()
{
    struct node *prevptr=NULL;
    struct node *ptr=start;
    while(ptr->link!=NULL)
    {
        prevptr=ptr;
        ptr=ptr->link;
    }

    prevptr->link=NULL;
    free(ptr);
}

void f(struct node *p)
{
    if(p==NULL)
    {
        
        return;
    }
   
   
     printf("%d ",p->data);
      f(p->link);
}

void f2(struct node *p)
{
    if(p==NULL)
    {
       
        return;
    }
   
    f2(p->link);
     printf("%d ",p->data);
      
}

void reverselist()
{
    struct node *head=start;
    struct node *prev=head;
    struct node *curr;
    head=head->link;
    curr=head;
    prev->link=NULL;

    while(head!=NULL)
    {
        head=head->link;
        curr->link=prev;
        prev=curr;
        curr=head;
    }

    head=prev;


}

void insertAtNode()
{
    int loc;
     printf("enter the position\n");
     scanf("%d",&loc);
     struct node *sixth;
     sixth=(struct node*)malloc(sizeof(struct node));
     sixth->data=40;
     struct node *ptr=start;
     struct node *prev=NULL;

     for(int i=1;i<loc-1;i++)
     {
         ptr=ptr->link;
     }

     prev=ptr;
     ptr=ptr->link;
     sixth->link=ptr;
     prev->link=sixth;
       
    
    
}

void deleteAtNode()
{
    int loc;
    printf("enter the position\n");
    scanf("%d",&loc);\
    struct node *ptr=start;
    struct node *prev=NULL;
    struct node *next=ptr;
    for(int i=1;i<loc-2;i++)
     {
         ptr=ptr->link;
     }

     prev=ptr;
     ptr=ptr->link;
     next=ptr->link;
     prev->link=next;
     ptr->link=NULL;

}  



int main()
{
    createNode();
    printf("linkedlist is:-\n");
    printNode(start);
    
    

    // ---------insert at last
    printf("\nnew linkedlist after enter at last node is:-\n");
    insertAtEnd();
    printNode(start);

    printf("\nnew linkedlist after enter at start node is:-\n");
    insertAtStart();
    printNode(start);

    
    
    lengthofLL();

    printLastNode();

    printSecondLastNode();

    deleteFirstNode();
    printf("\nnew linkedlist after delete at start node is:-\n");
    printNode(start);

    // deleteLastNode();
    // printf("\nnew linkedlist after delete at last node is:-\n");
    // printNode(start);

    deleteLastNode2();
    printf("\nnew linkedlist after delete at last node is:-\n");
    printNode(start);

    // ------------recursion
    printf("\nprintinng using recursion\n");

    f(start);

    printf("\nprintinng in reverse  using recursion\n");

    f2(start);

    printf("\nreverse linklist\n");
    // reverselist();

    f(start);

    printf("\nprinting between node\n");
    insertAtNode();
    insertAtNode();
    insertAtNode();
    f(start);

    printf("\n deleting between node\n");
    deleteAtNode();
    f(start);
    
    
    




}                                                                   