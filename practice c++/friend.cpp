#include <iostream>
using namespace std;
class B;
class A
{
    int a;
public:

    void change()
    {
        a=25;
        cout<<a<<endl;
    }
    friend  B;
};
class B
{
public:
    A ob;
    int b;
    void setv(){
    ob.a=25;
     b=ob.a+25;}
    change()
    {
        cout<<b<<endl;
    }
};
int main()
{
    A ob;
    B ob1;

    ob.change();
    ob1.setv();
    ob1.change();
}

