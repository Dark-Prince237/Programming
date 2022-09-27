#include<iostream>
using namespace std;
class B;
class A
{
    private:
    int a;

    public:
    A()
    {
        a=99;
    }
    friend void fun(A,B);
};

class B
{
    private:
    int b;

    public:
    B()
    {
        b=1;
    }

    friend void fun(A,B);
};


void fun(A obj1,B obj2)
{

    cout<<obj1.a+obj2.b<<endl;
}

int main()
{
    A obj1;
    B obj2;
    fun(obj1,obj2);
}