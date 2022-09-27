#include<iostream>
using namespace std;

class complex
{
    private:
    int a,b;

    public:
    complex()
    {
        a=11;
        b=22;
    }

    void display()
    {
        cout<<a<<" "<<b;
    }

    friend void sum(complex);


};

void sum(complex c)
{
   cout<<"sum is "<<c.a+c.b<<endl;
}
int main()
{
    complex c1;
    c1.display();
    sum(c1);
    c1.display();
}

