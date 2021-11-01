#include <iostream>
using namespace std;
class A
{
    int a;
public:
    void setval(int x)
    {
        a=x;
    }
    friend void value(A ob,B ob1);
};
class B
{
    int b;
public:
    void setval(int x)
    {
        b=x;
    }
    friend void value(A ob,B ob1);
};
void value(A ob,B ob1)
{   ob.setval(25);
    ob1.setval(50);
    cout<<ob.a<<endl;
    cout<<ob1.b<<endl;
}
int main()
{
   A ob;
   B ob1;
   value(ob,ob1);
}
