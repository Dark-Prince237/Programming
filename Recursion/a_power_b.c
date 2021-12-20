// a power b,b>=0 in rucursion
#include<stdio.h>
int power(int,int);
int main()
{
    int a,b;
    printf("enter the value of a and b");  
    scanf("%d %d",&a,&b);
    int c;
    c=power(a,b);
    printf("the power of a = %d and b= %d is %d",a,b,c);

}

int power(int a ,int b)
{
    if(b==0)
        return 1;
    else
        return a*power(a,b-1);
}