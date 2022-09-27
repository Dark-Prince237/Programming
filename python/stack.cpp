#include<iostream>
using namespace std;

class Array
{
     private:
     int a[10];

     public:

     void insert(int index,int value)
     {
         a[index]=value;
     }

     
};

class stack:private Array
{
    private:
    int top=0;
    int a[10];
    public:

    void push(int value)
    {
        insert(top,value);
        top++;
    }

    void show()
     {
         for(int i=0;i<10;i++)
         {
             cout<<a[i]<<" ";
         }
     }
};


int main()
{
    stack s1;
    s1.push(3);
    s1.push(67);
    s1.push(33);
    s1.push(114);
   
    // s1.insert(2,999);
     s1.show();
}
