#include<iostream>
using namespace std;

int main()
{
    cout<<"enter a number"<<endl;
    int n;
    cin>>n;

    
        for(int i=2;n>1;i++)

        {
            while(n%i==0)
            {
                cout<<i<<" ";
                n=n/i;
            }
        }
 }
