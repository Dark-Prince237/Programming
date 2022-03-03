#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    
    cout<<"enter a string"<<endl;
    string S;
    cin>>S;
    cout<<"String you entered is "<<S<<endl;
    char c;
    int l;
    l=S.length();
   

    for(int i=0;i<l/2;i++)
    {
        c=S[i];
        S[i]=S[l-i-1] ;
        S[l-i-1]=c;
    }
    
    cout<<S;


    
}