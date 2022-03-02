#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter two numbers a and b"<<endl;
    cin>>a>>b;
    cout<<"numbers are:- "<<a<<" "<<b<<endl;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"numbers after swapping are:- "<<a<<" "<<b<<endl;

}