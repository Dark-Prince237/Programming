#include<iostream>
using namespace std;

class A
{
    public:
    void fun()
    {
        cout<<"this is A"<<endl;
    }

    
};

class B
{
    public:

    friend void A::fun();
};

int main()
{
    A obj1;
    B obj2;
    obj2.fun();
}