#include<iostream>
using namespace std;


int main()
{
    int m,n,i,j;
    
    cout<<"enter a two numbers"<<endl;
    cin>>m>>n;

    cout<<"Prime no between "<<m<<" and "<<n<<" are:- ";

    for( i=m+1;i<=n-1;i++)
    {
       
           for(j=2;j<=i-1;j++)
           {
               if(i%j==0)
                break;
           }

           if(j==i)
            {
                cout<<j<<" ";

            }
    }
    

   
    

}
