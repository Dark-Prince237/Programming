#include<iostream>
using namespace std;

int main()
{
    int A[3][3],B[3][3],C[3][3];
    cout<<"enter first matrix"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>A[i][j];
        }
    }

    cout<<"enter second matrix"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>B[i][j];
        }
    }
    cout<<"matrix A is:-"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<A[i][j]<<" ";
        }

        cout<<endl;
    }

    cout<<"matrix B is:-"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<B[i][j]<<" ";
        }

        cout<<endl;
    }

    

    cout<<"Multiply of Matrix A and B is:-"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            int sum=0;
            for(int k=0;k<3;k++)
            { 
            sum=sum+A[i][k]*B[k][j];
            }

            C[i][j]=sum;

        }

       
    }

   
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<C[i][j]<<" ";
        }

        cout<<endl;
    }


    

}