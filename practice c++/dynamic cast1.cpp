#include <iostream>
using namespace std;
class a
{
public:
   virtual void display()
    {
        cout<<"display class a"<<endl;
    }
};
class b:public a
{
public:
    void display()
    {
        cout<<"display class b"<<endl;
    }
    void print()
    {
        cout<<"print class b"<<endl;
    }
};
class c:public a
{
    void display()
    {
        cout<<"display class c"<<endl;
    }
    void print1()
    {
        cout<<"print class b"<<endl;
    }
};
int main()
{
//    a *x;
//    b y,*yp;
//    c z;
//    x=&y;
//    x->display();
//    yp=dynamic_cast <b*>(x);
//    yp->print();
a x,*xp,*xp1;
b y;
xp=&y;

b *yp=dynamic_cast<b*>(xp);
yp->display();
yp->print();
}
