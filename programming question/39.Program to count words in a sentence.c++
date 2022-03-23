#include<iostream>
using namespace std;
#include<string.h>


int main()
{
    char S[100];

    fgets(S,100,stdin);
     
    int i=0;
    int l=strlen(S)-1;
    cout<<"length is "<<l<<endl;
    cout<<"words are:-"<<endl;
    int count=0;
    
    for(int i=0;i<l;i++)
    {
        if(0)
        {

        }
        else if(S[i]==' ')
        {
            cout<<","<<endl;
            count++;
           
            while(S[i+1]==' ')
            {
                i++;
                
                
            }
             
            
            continue;
        }
         

    }
    for(int i=l-1;i>=0;i--)
    {
        cout<<S[i];
    }

    cout<<endl;

    cout<<"no. of word count is "<<count+1;
    


}

    
    
