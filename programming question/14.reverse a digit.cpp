#include<iostream>

using namespace std;

int main()
{
    cout<<"enter a digit"<<endl;
    int n;
    cin>>n;
    int rev=0;
    int t;
    while(n!=0)
    {
        t=n%10;
        rev=rev*10+t;
        n=n/10;
    }

    cout<<"reverse of digit is "<<rev<<endl;
    

}