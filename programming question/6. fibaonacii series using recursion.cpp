#include<iostream>
using namespace std;
int fib(int);
int main()
{
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    
    int f;

    for(int i=1;i<=n;i++)
    {
    f=fib(i);
    
    cout<<f<<" ";
    }

}

int fib(int x)
{
    if (x==1)
        return 0;
    else if(x==2)
        return 1;
    else
        return fib(x-1)+fib(x-2);
}