#include<iostream>
using namespace std;
#include<string.h>
int main()
{
    cout<<"enter a string"<<endl;
    char S[10];
    fgets(S,10,stdin);
    puts("you entered a string is:- ");
    puts(S);
    int l;
    l=strlen(S)-1;

    
        int i;
    for(i=0;i<l/2;i++)
    {
       if(S[i]!=S[l-i-1])
       {
           break;
       }
        
    }

    if(i==(l/2))
    {
        cout<<"palindrome"<<endl;
    }
    
    else
    {
        cout<<"not palindrome"<<endl;
    }
    
}