#include<iostream>
using namespace std;
#include<string.h>


int main()
{
    char S[100];
    cout<<"Enter a string"<<endl; 

    fgets(S,100,stdin);
     
    int i=0;
    int l=strlen(S)-1;
    cout<<"after removing duplicate characters,string is :- ";
    
   
   for(int i=0;i<l;i++)
   {
       while(S[i]==S[i+1])
       {
           i++;
       }

       cout<<S[i];
   }
    
    cout<<endl;



}

    
    
