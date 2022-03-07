#include<iostream>
using namespace std;


int main()
{
    int i;
    int n;
    cout<<"enter a number"<<endl;
    cin>>n;

    for( i=2;i<=n-1;i++)
    {
       
            if(n%i==0)
            {
               
                break;
            }
    }
    if(i==n)
    {
        cout<<"it is a prime no."<<endl;

    }

    else
    {
         cout<<"not a prime number"<<endl;
    }
    

}
