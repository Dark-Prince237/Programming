#include<iostream>
using namespace std;

class complex
{
    private:
    
    int a,b;

   public:

   complex(int x)
   {
       a=x;
       b=3;
      
   }

   complex()
   {
       a=11;
       b=33;
   }

   complex(complex &c,complex &d)
   {
        a=c.a+d.a; 
        b=c.b+d.b;
   }

   void show_data()
    {
        cout<<a<<" "<<b<<endl;
    }



};

 

int main()
{
   complex c1;
   complex c2(23);
   c2.show_data();
//    complex c3(c2);
    complex c3(c1,c2);
   c3.show_data();
} 