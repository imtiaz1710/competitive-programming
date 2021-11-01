#include <iostream>
using namespace std;
class A
{
public:
    A()
    {
        cout<<"base class cons..."<<endl;
    }
    ~A()
    {
        cout<<"base class des..."<<endl;
    }
};
class B:public A
{
public:
    B()
    {
        cout<<"derived class cons..."<<endl;
    }
    ~B()
    {
        cout<<"derived class des..."<<endl;
    }
};
int main()
{
    B ob;

}
