#include<iostream>
using namespace std;

int main()
{
    cout<<"enter a two number"<<endl;
    int a,b;
    cin>>a>>b;
    int L;
    
    for( L=a>b?a:b;L<=a*b;L++)
    {
        if (L%a==0 && L%b==0)
        {
            break;

        }
        
    }

    cout<<"LCM of "<<a<<" and "<<b<<" is "<<L<<endl;


}
