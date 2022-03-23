#include <iostream>
#include<string.h>
using namespace std;

int main()
{
   char S[100];
    cout<<"Enter a string"<<endl;

    fgets(S,20,stdin);
     
   
    int l=strlen(S)-1;

    char sub[11];
    cout<<"Enter a substring"<<endl;
     fgets(sub,10,stdin);

    int k=strlen(sub)-1;
    int i,j;    
    

    for( i=0;i<l;i++)
    {
        for(j=0;j<k;j++)
        {
            if(sub[j]==S[i])
            {
                while(S[i]==sub[j])
                {
                        i++;
                        j++;       
            
                }
            }

           

        }

        if(j==k)
        {
            cout<<"substring found"<<endl;
        }

   
    }
}
