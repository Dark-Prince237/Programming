#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int main()
{
    int n;
    cout<<"enter a binary"<<endl;
    cin>>n;
    int i=0;
    int sum=0;

    while(n!=0)
    {
        int t=n%10;
        if(t==0)
        {
            i++;
        }

        else if(t==1)
        {
            sum=sum+pow(2,i);
            i++;
        }

        else
        {
            cout<<"enter valid binary "<<endl;
            exit(0);
        }

        n=n/10;
    }

    cout<<sum<<endl;
}
