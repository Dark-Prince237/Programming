#include<iostream>
using namespace std;

class A
{
    public:
    void fun()
    {
        cout<<"A"<<endl;
    }

    void fun2()
    {
        cout<<"A 2"<<endl;
    }
};

class B:public A
{
    public:
    void fun()
    {
        cout<<"B"<<endl;
    }

    void fun2(int x)
    {
        cout<<"B 2"<<endl;
    }
};

int main()
{
    A  a1,*p;
    B b1,*q;
    p=&b1;
    b1.fun(); 
    p->fun();
}