 #include<stdio.h>
 #include<stdlib.h>
 #define size 5

 int queue[size];
 int front=-1;
 int rear=-1;
 void enqueue(int x)
 {
     if(rear==size-1)
     {
         printf("queue is full\n");

     }

     else if(front==-1)
     {
         rear=front=0;
     }
     
     else
     {
         rear++;
     }

     queue[rear]=x;
 }

void dequeue()
{
    if(front==-1)
    {
        printf("empty queue\n");
    }

    else if(front==rear)
    {
        front=rear=-1;
    }

    else
    {
        printf("\n%d is deleted\n",queue[front]);
        front++;
    }

}

void display()
 {
     printf("queue is:- ");
     for(int i=front;i<=rear;i++)
     {
         printf("%d ",queue[i]);
     }
 }

 int main()
 {
     int x;
     printf("enter a number to push\n");
     scanf("%d",&x);
     enqueue(x);
     scanf("%d",&x);
     enqueue(x);
     scanf("%d",&x);
     enqueue(x);
     display();
     dequeue();
     dequeue();
     
     display();
 }