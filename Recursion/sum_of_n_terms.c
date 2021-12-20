// sum of nth number of term in recursion
#include<stdio.h>
int sum_of_nth(int);
int main()
{
    int n,sum;
    printf("enter nth term: ");
    scanf("%d",&n);
       
    sum=sum_of_nth(n);
    printf("%d",sum);
    
}

int sum_of_nth(int n)
{
    if(n==1)
        return 1;

    else
        return n+sum_of_nth(n-1);
}