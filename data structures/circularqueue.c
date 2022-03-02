 #include<stdio.h>
 #include<stdlib.h>
 #define size 5

 int queue[size];
 int front=-1;
 int rear=-1;
 void enqueue_circular(int x)
 {
     if(front==0 && rear==size-1)
     {
         printf("queue is full\n");

     }

     else if(front==-1)
     {
         rear=front=0;
         queue[rear]=x;
     }
     
     else if(rear==size-1)
    {
        rear=0;
        queue[rear]=x;
    }

    else
    {
        rear++;
        queue[rear]=x;
    }

   
 }

void dequeue_circular()
{
    if(front==-1)
    {
        printf("empty queue\n");
    }

    else if(front==rear)
    {
        front=rear=-1;
    }

    else if(front=size-1)
    {
        front=0;
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
     enqueue_circular(x) ;
     scanf("%d",&x);
     enqueue_circular(x);
     scanf("%d",&x);
     enqueue_circular(x);
     display();
     dequeue_circular();
     dequeue_circular();
     
     display();
 }