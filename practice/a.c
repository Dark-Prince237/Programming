#include<stdio.h>
#include<string.h>

int main()
{
    char s[10]="hello";
    char *p=&s[0];
    for(int i=0;s[i]!='\0';i++)
    {
        printf("%c",*(p+i));
    }

    
}