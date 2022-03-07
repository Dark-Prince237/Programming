#include<iostream>
using namespace std;

int pow(int x,int y)
{
    if(y==0)
        return 1;

    else
        return x * pow(x,y-1);
}



int main()
{
    
    int x,y;
    cout<<"enter the value of x and y"<<endl;
    cin>>x>>y;

    cout<<"power of "<<x<<" and "<<y<<" is "<<pow(x,y)<<endl;

}
