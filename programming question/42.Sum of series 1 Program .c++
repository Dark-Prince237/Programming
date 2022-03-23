#include<iostream>
using namespace std;



int main()
{
    cout<<"enter the value of n"<<endl;
    int n;
    cin>>n;
    int sum=0;

    for(int i=1;i<=n;i++)
    {
        int t=0;
        for(int j=1;j<=i;j++)
        {
            t=t+j;
        }
        sum=sum+t;
    }

    cout<<"sum is "<<sum<<endl;


}

    
    
