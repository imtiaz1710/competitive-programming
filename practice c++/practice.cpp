#include <iostream>
#include <string.h>
using namespace std;
class A
{  public:
     int *p;
    A(int x)
    {
        p=&x;

    }
    ~A()
    {
        cout<<p<<endl;
    }
    A(A &ob)
    {
        p=ob.p;
    }
};
int main()
{
    A ob(5);
    A ob1=ob;
}
