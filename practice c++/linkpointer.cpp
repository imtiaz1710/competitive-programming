#include<iostream>
using namespace std;
class A
{
public:
    int x;
    A(){cout<<"constructing..."<<endl;}
    ~A(){cout<<"destructing..."<<endl;}
    int getval()
    {
        cout<<x<<endl;
    }
    A *link;
};
int main()
{
    A ob;
    ob.x=5;
    ob.getval();


    ob.link=new A;
    (ob.link)->x=10;
    (ob.link)->getval();
    delete ob.link;
}

