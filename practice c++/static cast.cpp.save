///1.no need a virtual function
///2.compile time casting
#include <iostream>
using namespace std;
class a
{
public:
   void display()
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

int main()
{
a x;
b *yp;
yp=static_cast<b*>(&x);
yp->display();
yp->print();
}

