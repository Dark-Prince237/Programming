#include<iostream>
using namespace std;

int main()
{
    cout<<"enter a digit"<<endl;

    int n;
    cin>>n;
    int rev=0;
    int d=n;

    while(n!=0)
    {
        int x=n%10;
        rev=10*rev+x;
        n=n/10;
        

    }

   

    if(d==rev)
    {
        cout<<"palindrome";
    }

    else
    {
        cout<<"not palindrome"<<endl;
    }
    
    
}