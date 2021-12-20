// fast a power b,b>=0 in rucursion
#include<stdio.h>
int fastpow(int,int);
int main()
{
    int a,b;
    printf("enter the value of a and b:");  
    scanf("%d %d",&a,&b);
    int c;
    c=fastpow(a,b);
    printf("the power of a = %d and b= %d is %d",a,b,c);

}

int fastpow(int a ,int b)
{
    if(b==0)
        return 1;
    else if(b%2==0)
        return fastpow(a*a,b/2);
    else
        return a * fastpow(a,b-1);
}