#include<stdio.h>
#include <stdlib.h>
#define N 10
int TOP=-1;
int s[N];
void push(int x)
{
    if(TOP==N-1)
    {
        printf("stack is overflow\n");
        return;
    } 
    TOP++;
    s[TOP]=x;
}

void pop()
{
    if(TOP==-1)
    {
        printf("stack is empty\n");
        return;
    }
    int item;
    item=s[TOP];
    TOP--;
    printf("%d is deleted from stack",item);
}

void peek()
{
    if(TOP==-1)
    {
        printf("STACK IS EMPTY");
        return;
    }

    else
    {
        printf("Peek is %d\n",s[TOP]);
    }
}

void display()
{
    int i;
    printf("\nStack is [ ");
    for(i=TOP;i>=0;i--)
    {
        printf("%d ",s[i]);
    }
    printf("]");
}
int main()
{
    int ch; 
   do
   {
    printf("\nChoose one from the below options...\n");  
    printf("\n1.Push\n2.Pop\n3.Peek\n4.Display\n0.Exit\n");
    int ch;
    scanf("%d",&ch);  
    switch (ch)
    {
    case 1:
    {
        int x;
        printf("enter a value to push\n");
        scanf("%d",&x);
        push(x);
        break;
    }

    case 2:
     { 
        pop();
        break;
     }

    case 3:
    {
        peek();
        break;
    }

    case 4:
    {
        display();
        break;
    }

    case 0:
    {
        exit(0);
        break;
    }

    default:
        break;
       
    }

   }while(1);
}