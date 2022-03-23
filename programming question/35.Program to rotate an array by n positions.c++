#include<iostream>
#include<string.h>
using namespace std;

int main()
{
int a[10];


    cout<<"enter 5 elements"<<endl;

    for(int i=0;i<5;i++)
    {
        cin>>a[i];
    }

    cout<<"elements are:-"<<endl;

    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<" ";
    }
    
    char dir[10];
     cout<<"\nenter a direction ,left or right\n";
    cin>>dir;
   
    if(strcmp(dir,"left")==0) 
    {
       
        int n;
        cout<<"\nhow much positions ,you want to rotate,enter the value of n "<<endl;

        cin>>n;

        while(n)
        {
            int temp,i;
            temp=a[0]; 
            for(i=0;i<4;i++)
            {
                    
                    a[i]=a[i+1];
            }
            a[4]=temp;

            n--;
        }

        cout<<"after rotate elements are:-"<<endl;

        for(int i=0;i<5;i++)
            {
                cout<<a[i]<<" ";
            }
    }
    
    else if(strcmp(dir,"right")==0)
    {
        int n;
        cout<<"\nhow many positions ,you want to rotate,enter the value of n "<<endl;

        cin>>n;

        while(n)
        {
            int temp,i;
            temp=a[4]; 
            for(i=4;i>0;i--)
            {
                    
                    a[i]=a[i-1];
            }
            a[0]=temp;

            n--;
        }

        cout<<"after rotate elements are:-"<<endl;

        for(int i=0;i<5;i++)
            {
                cout<<a[i]<<" ";
            }
    }

    else
    {
        cout<<"enter valid direction"<<endl;
    }

    




   



}