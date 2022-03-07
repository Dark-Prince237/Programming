#include<iostream>
using namespace std;


int main()
{
    int n;
    
    cout<<"enter a number"<<endl;
    cin>>n;
    
    
    int i,j;
     for(i=1;;i++)
    {
       for(j=2;j<i;j++)
       {
           if(i%j==0)
            break;
       }

       if(j==i)
       {
           cout<<j<<" ";
           n--;
           if(n==0)
           {
               break;
           }
       }
         
    }
    
    

   
    

}
