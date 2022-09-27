#include<iostream>
using namespace std;



class A
{
    private:
    int a,b;

    public:

    A()
    {
        a=11;
        b=22;
    }
    void show()
    {
        cout<<"this is A"<<endl;

    }

};

class B:protected A
{
    public:
    void show2()
    {
        cout<<"this is B"<<endl;
    }

};




int main()
{
    A a1;
    a1.show();

    B b1;
    b1.show();

    

}