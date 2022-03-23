#include <iostream>
#include<string.h>
using namespace std;

int main()
{
   char S[100];
    cout<<"Enter a string"<<endl;

    fgets(S,100,stdin);
     
    int i=0;
    int l=strlen(S)-1;

    char V[11]="aeiouAEIOU";
    int k=strlen(V);
    int count=0;


    for(int i=0;i<l;i++)
    {
        for(int j=0;j<k;j++)
        {
            if(S[i]==V[j])
            {
                count++;
                break;
            }
        }
    }

    cout<<count;
}
