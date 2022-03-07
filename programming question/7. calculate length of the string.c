#include<stdio.h>
#include<string.h>
int main()
{
    char S[10];
    printf("enter a string\n");
    scanf("%s",S);
    // for(int i=0;S[i]!='\0';i++)
    // {
    //     printf("%c",S[i]);
    // } 

    printf("string is %s\n",S);
    // int count=0;
    // for(int i=0;S[i]!='\0';i++)
    // {
    //     count++;
    // }  

    // printf("length of string is %d",count);  
    int i=0;
    int count=0;
    while(S[i])
    {
       
       
        count++;
        i++;
        
    }

    printf("length is %d\n",count);

    

    // method 3 strlev

    printf("string length using strlen is %ld",strlen(S));
    
   

    
}