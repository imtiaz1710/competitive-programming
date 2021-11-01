#include <iostream>
using namespace std;
class A
{
    int a;
public:

    void change()
    {
        cout<<a<<endl;
    }
    friend class B;
};
class B
{
public:
    A ob;
    ob.a=25;
    int b=ob.a+25;
    change()
    {
        cout<<b<<endl;
    }
};
int main()
{
    A ob;
    B ob1;
    ob.a=23;
    ob.change();
    ob1.change();
}

