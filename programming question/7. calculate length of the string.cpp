#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    /*Method 1
    cout<<"enter a string"<<endl;
    string S;
    cin>>S;
    cout<<"String you entered is "<<S<<endl;
    cout<<"Length of string is "<<S.length()<<endl;
    cout<<"Length of string is "<<S.size();*/

    // method 2 

    char S[20];

    int i=0;
    cout<<"enter a string"<<endl;
    fgets(S,20,stdin);
    int count=0;
    while(S[i])
    {
        cout<<S[i];
       
        count++;
        i++;
        
    }

    cout<<"length is "<<count-1<<endl;

    // method 3 

    cout<<"using strlen:- "<<strlen(S)-1;


    
}