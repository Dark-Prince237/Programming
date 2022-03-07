#include<iostream>

using namespace std;

int main()
{
    cout<<"enter a digit"<<endl;
    int n;
    cin>>n;
    int count=0;
    while(n!=0)
    {
      n=n/10;
      count++;  
    }

    cout<<"count is "<<count<<endl;

}