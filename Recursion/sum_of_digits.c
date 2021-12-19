// sum of digits using recursion
#include<stdio.h>
int sum_of_digit(int);
int main()
{
    int n,sum;
    printf("enter the number whose sum of digits to find: ");
    scanf("%d",&n);
       
    sum=sum_of_digit(n);
    printf("%d",sum);
    
}

int sum_of_digit(int n)
{
    if(n<10)
        return n;

    else
        return (n%10)+sum_of_digit(n/10);
}