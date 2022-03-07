#include<iostream>
using namespace std;

int main()
{
    int A[2][2];
    cout<<"enter a matrix"<<endl;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>A[i][j];
        }
    }

   
    cout<<"matrix A is:-"<<endl;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<A[i][j]<<" ";
        }

        cout<<endl;
    }

    

    cout<<"Transpose of a Matrix is:-"<<endl;
     
    for(int i=0;i<2;i++)
    {
        int c=0;
    
        for(int j=0;j<3;j++)
        {
          
            c=A[i][j];
            A[i][j]=A[j][i];
            A[j][i]=c;
        }

        
    }



//    printing C[i][j]
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<A[i][j]<<" ";
        }

        cout<<endl;
    }


    

}