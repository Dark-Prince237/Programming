#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    cout<<"enter 5 strings\n";

    char S[5][10],str[10];
    int i;

    for(int i=0;i<5;i++)
    {
        fgets(S[i],10,stdin);//fgets takes index from 1 
    }
    int n=5;
    while(n)
    
    {
        for(i=0;i<5;i++)
        {
            if(strcmp(S[i],S[i+1])>0)
            {   strcpy(str,S[i]);
                strcpy(S[i],S[i+1]);
                strcpy(S[i+1],str);
            }

         }

         n--;
    
    }

    for(int i=1;i<6;i++)
    {   
        cout<<i;
        puts(S[i]);
    }

    
}