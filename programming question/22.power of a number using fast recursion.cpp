#include<iostream>
using namespace std;

int fastPow(int x,int y)
{
    if(y==0)
        return 1;

    else if(y%2==0)
        return fastPow(x*x,y/2);
    else
        return x*fastPow(x,y-1);
}



int main()
{
    
    int x,y;
    cout<<"enter the value of x and y"<<endl;
    cin>>x>>y;

    cout<<"power of "<<x<<" and "<<y<<" is "<<fastPow(x,y)<<endl;

}
