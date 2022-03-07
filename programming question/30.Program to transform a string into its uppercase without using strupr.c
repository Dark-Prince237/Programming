#include<stdio.h>
int main()
{
    printf("enter a string\n");
    char S[10];
    fgets(S,10,stdin);
    puts("you entered a string is ");
    puts(S);

    for(int i=0;S[i]!='\0';i++)
    {
        if(S[i]>='a'&& S[i]<='z')
        {
         S[i]=S[i]-32;
        }
        
    }
    printf("String in upper is %s\n",S);
    
}