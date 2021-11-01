#include <iostream>
using namespace std;
class base
{
public:
    base()
    {
        cout<<"base cons..."<<endl;
    }
    ~base()
    {
        cout<<"base des..."<<endl;
    }
};
class derived1:public base
{
public:
    derived1()
    {
        cout<<"derived1 cons..."<<endl;
    }
    ~derived1()
    {
        cout<<"derived1 des..."<<endl;
    }
};
class derived2:public derived1
{
public:
    derived2()
    {
        cout<<"derived2 cons..."<<endl;
    }
    ~derived2()
    {
        cout<<"derived2 des..."<<endl;
    }
};
class derived3:public base
{
public:
        derived3()
    {
        cout<<"derived3 cons..."<<endl;
    }
    ~derived3()
    {
        cout<<"derived3 des..."<<endl;
    }
};
class derived4:public base
{
public:
        derived4()
    {
        cout<<"derived4 cons..."<<endl;
    }
    ~derived4()
    {
        cout<<"derived4 des..."<<endl;
    }
};
int main()
{
    derived1 ob;
    derived2 ob1;
    derived3 ob2;
    derived4 ob3;
}
