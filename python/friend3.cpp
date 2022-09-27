#include<iostream>
using namespace std;
class complex
{
    private:
    int a,b;

    public:

    complex()
    {

    }

    complex(int x,int y)
    {
        a=x;
        b=y;
    }

    void show()
    {
        cout<<a<<" "<<b<<endl;
    }

    friend complex operator +(complex,complex);

};


complex operator+(complex c,complex d)
{
    complex temp;
    temp.a=c.a+d.a;
    temp.b=c.b+d.b;
    return temp;
}

int main()
{
    complex c1(23,47);
   
    c1.show();

    complex c2(45,74);
    c2.show();
    
    complex c3;
    c3=operator +(c1,c2);
    c3.show();
}