#include<iostream>
using namespace std;

class complex
{
    private:
    int a,b;

    static int c;

    public:

    static  void setData(int x)
    {
        c=x;
    }

    static void display()
    {
        cout<<c<<endl;
    }


};

int complex::c=76;

int main()
{
   complex::setData(123);
   complex::display();
}