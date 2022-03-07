#include<iostream>
using namespace std;

int main()
{
    cout<<"enter a two number"<<endl;
    int a,b;
    cin>>a>>b;
    int L;
    
    for( L=a>b?b:a;L>=1;L--)
    {
        if (a%L==0 && b%L==0)
        {
            break;

        }
        
    }

    cout<<"HCF of "<<a<<" and "<<b<<" is "<<L<<endl;


}
