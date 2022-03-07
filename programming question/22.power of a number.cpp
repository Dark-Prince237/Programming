#include<iostream>
using namespace std;

int main()
{
    
    int x,y;
    cout<<"enter the value of x and y"<<endl;
    cin>>x>>y;

    int m=1;

    for(int i=1;i<=y;i++)    
    {
        m=m*x;
    }

    cout<<x<<" power "<<y<<" is "<<m<<endl;

}
