#include<iostream>
using namespace std;

int square(int n)
{
    if(n<10)
        return n*n;

    else 
        return (n%10)*(n%10)+square(n/10);
}



int main()
{
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    int sq=square(n);
    cout<<"sum of squares is "<<sq<<endl;   
} 