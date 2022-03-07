#include<iostream>

using namespace std;

int main()
{
    cout<<"enter a digit"<<endl;
    int n;
    cin>>n;
    int sum=0;
    int t;
    while(n!=0)
    {
        t=n%10;
        sum=sum+t;
        n=n/10;
    }

    cout<<"sum of digits is "<<sum<<endl;
    

}