#include<iostream>
using namespace std;

int main()
{
    
    for(int i=1;i<=1000 ;i++)
    {
        int sum=0;
        int arm=i;
        while(arm!=0)
        {
            int t=arm%10;
            sum=sum+(t*t*t);
            arm=arm/10;
        }

        if(i==sum)
        {
            cout<<i<<" ";
        }
        
    }

    


}
