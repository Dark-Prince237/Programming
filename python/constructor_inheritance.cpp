#include<iostream>
using namespace std;

class A
{
    private:
    int a;

    public:
    A(int k)
    {
        cout<<k<<endl;
    }

    ~A()
    {
        cout<<"dest A"<<endl;
    }

};


class B:public A
{
    public:

    B(int x,int y):A(5)
    {
        cout<<x+y<<endl;
    }

    ~B()
    {
        cout<<"dest B"<<endl;
    }
};

int main()
{
    B b1(12,3);
}