// swap of two number using call by reference
#include<stdio.h>

void swap(int*,int*);

int main()
{
    int a,b;
    printf("enter the two numbers to swap\n");
    scanf("%d %d",&a,&b);
    printf("the two numbers are %d and %d\n",a,b);
    swap(&a,&b);
    printf("after swapping numbers are %d and %d",a,b);

}

void swap(int *x,int *y)
{
    int c;
    c=*x;
    *x=*y;
    *y=c;
}