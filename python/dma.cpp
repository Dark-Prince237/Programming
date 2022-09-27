#include<iostream>
using namespace std;

int main()
{
    int *p=new int;
    float *p=new float;
    float *q=new float[3];

    delete p;
    delete []q;
}