#include<iostream>
using namespace std;

class complex
{ 
    private:
    int a,b;
    static float c;

    public:

    void set_data(int,int);
    void show_data();
    complex add(complex);
    static void set(float); 

    static void set(float x)
    {
        c=x;
    }      
        
};



void complex::set_data(int x,int y)
{
    a=x;
    b=y;
}

void complex::show_data()
{
    cout<<a<<" "<<b<<endl;
}

complex complex::add(complex c)
{
    complex d;

   
     d.a=a+c.a;
    d.b=b+c.b;

    return d; 

}


int main()
{
    complex c1;
    c1.set_data(11,22);
    complex c2;
    c2.set_data(44,55);
    c1.show_data();
    c2.show_data();

    complex c3;
    c3=c1.add(c2);
    c3.show_data(); 

    complex::set(2.4);

  
   
}

