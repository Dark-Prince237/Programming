#include<iostream>
using namespace std;

int main()
{
    cout<<"enter a number"<<endl;
    int n;
    cin>>n;
    int i,j,k;

    cout<<n<<" co prime are:-"<<endl;
    
    while(n)
    {
        for(i=2;;i++)
        {
            for(j=2;j<=i;j++)
            {
                
                int  m=i>j?j:i;

                for(k=2;k<=m;k++)
                {
                    if(i%k==0 && j%k==0)

                        {
                            break;
                        }
                }

                if(k==m+1)
                    {
                        cout<<"("<<i<<","<<j<<")"<<endl;
                        n--;
                        if(n==0)
                        {
                            exit(0);
                        }

                    }


            }

            
            
        }

        
    }

   
    
        

}
