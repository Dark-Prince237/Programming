#include<iostream>
using namespace std;


int t,rev=0;
int digits(int n)
{
    if(n) //or if(n>0)
    {
        
        t=n%10;
        rev=rev*10+t;
        digits(n/10);

    }

    return rev;
}

int main()
{
    int n;
    cout<<"enter a digit"<<endl;
    cin>>n;

    int sum;
    sum=digits(n);
    cout<<"sum is "<<sum<<endl;
}