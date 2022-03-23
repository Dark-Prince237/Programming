#include <iostream>
#include<string.h>
using namespace std;

int main()
{
   
    cout<<"Enter a string"<<endl;

    string S;
    cin>>S;
     
    string sub;
    cout<<"Enter a substring"<<endl;
     cin>>sub;


    int k =S.find(sub);
    if(k==-1)
    {
        cout<<"substring not found"<<endl;
    }

    else
    {
    cout<<"substring is at index "<<k;
    }

}
