#include<iostream>
using namespace std;

class box
{
    private:
    int l,b,h;

    public:

    void setDimension(int l,int b,int h)
    {
        this->l=l;
        this->b=b;
        this->h=h;
    }

    void showDemension()
    {
        cout<<"l="<<l<<" b="<<b<<" h="<<h<<endl;
    }
};

int main()
{
    box b1,*p;
    // b1.setDimension(2,3,4);
    // b1.showDemension();

    p=&b1;
    p->setDimension(2,3,4);
    p->showDemension();
}