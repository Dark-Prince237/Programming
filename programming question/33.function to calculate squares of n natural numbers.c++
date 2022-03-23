#include<iostream>
using namespace std;

int square(int n)
{
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        sum=sum+i*i;

    }

    return sum;

}

int main()
{
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    int sq=square(n);
    cout<<"square of "<<n<<" natural number is "<<sq<<endl;
}