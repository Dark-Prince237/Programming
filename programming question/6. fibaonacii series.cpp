#include<iostream>
using namespace std;

int main()
{
    int n;
    int c=0;
    int a=-1;
    int b=1;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    
    for(int i=0;i<n;i++)
    {
        c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;
    }





}