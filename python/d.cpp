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
    complex operator ++();
    complex operator  ++(int);
     
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
+
+++
complex complex::operator ++()
{
    complex d;

   
     d.a=++a;
    d.b=++b;

    return d; 

}

    
complex complex::operator ++(int)
{
    complex d;

   
     d.a=a++;
    d.b=++b;

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
    c3=c2.operator++(); 
    complex c4=c2.operator++();
    c3.show_data();


    

  
   
}

