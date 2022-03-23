#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int main()
{
   char S[100];
    cout<<"Enter a string"<<endl;

    fgets(S,100,stdin);
     
    int i=0;
    int l=strlen(S)-1;
    int A=0,D=0;

    for(int i=0;i<l;i++)
    {
        if(S[i]>='a' && S[i]<='z' || S[i]>='A' && S[i]<'Z')
        {
            A=1;
        }

        if(S[i]>='0' && S[i]<='9')
        {
            D=1;
        }
        
    }

    if(A==1 && D==1)
    {
        cout<<"alphanumeric"<<endl;
    }

    else
    {
        cout<<"not a alphanumeric"<<endl;
    }

}
