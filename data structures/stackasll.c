 #include<stdio.h>
 #include<stdlib.h>

 struct node
 {
     int data;
     struct node *link;
 };
 struct node *top=0;


 void push(int x)
 {
     struct node *newnode;
     newnode=(struct node*)malloc(sizeof(struct node));
     newnode->data=x;
     newnode->link=top;
     top=newnode;
     
 }

 void display()
 {
     struct node *temp;
     temp=top;
     printf("linklist are\n");
     while(temp!=0)
     {
         printf("%d\n",temp->data);
         temp=temp->link;
     }
 }

 void pop()
{
    printf("%d is deleted from stack\n",top->data);
    struct node *temp=top;

    top=top->link;
    free(temp);
}
 

void peek()
{
    printf("peek is %d\n",top->data);
}

int main()
 {
     int x;
     printf("enter a number to put in stack\n");
     scanf("%d",&x);
     push(x);
     scanf("%d",&x);
     push(x);
     scanf("%d",&x);
     push(x);
     pop();

     peek();
     
     display();
     
 }