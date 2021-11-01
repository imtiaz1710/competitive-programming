///1.base and derived class
///2.one virtual function
///3.base class should first point a derived object(upcasting),then this base address should cast in derived pointer(downcasting)
///4.run tyme casting
#include <iostream>
using namespace std;
class x
{
public:
     virtual void show(){cout<<"x class"<<endl;}
     void fn(){cout<<"fun from class x"<<endl;}

};
class y:public x
{
public:
    void show(){cout<<"y class"<<endl;}
    void fn(){cout<<"fun from y class"<<endl;}
    void izm(){cout<<"izm"<<endl;}
};
class z:public x
{
public:
    void show(){cout<<"z class"<<endl;}
    void fn(){cout<<"fun from z class"<<endl;}
};
int main()
{
   x a,*ap;
   y b,*bp;
   z c;
   ap=&a;
   ap->show();
   ap->fn();
   ap=&b;
   ap->show();
   ap->fn();
   bp=&b;
   x* ap1=dynamic_cast <x*>(bp);
   ap1->fn();
}
