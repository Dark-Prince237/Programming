#include<iostream>
using namespace std;

int main()
{
    cout<<"enter two numbers"<<endl;
    int a,b;
    cin>>a>>b;
    int i;
    int  m=a>b?b:a;

    for(i=2;i<=m;i++)
    {
        if(a%i==0 && b%i==0)
        {
            break;
        }
    }

    if(i==m+1)
    {
        cout<<"co prime"<<endl;

    }

    else
    {
        cout<<"not a co prime"<<endl;
    }

    
        

}
