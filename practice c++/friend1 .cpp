#include <iostream>
using namespace std;
class A;
class B
{
    int b;
    public:
    B(){b=0;}

    void print(A ob);
};class A
{
    int a;

public:
    A(){a=0;}
   void setval(int x)
   {
       a=x;
   }
   friend void B::print(A ob);
};


void B::print(A ob)
{
   ob.a=25;
   b=ob.a+25;
   cout<<ob.a<<endl<<b;
}
int main()
{
    A ob;
    B ob1;
    ob1.print(ob);
}
