#include <iostream>
using namespace std;
class a
{
public:

    a(int a)
    {
      cout<<"a cons..."<<a<<endl;
    }
    ~a()
    {
        cout<<"a dis..."<<endl;
    }
};
class b
{
    public:
    b(int a,int b)
    {
      cout<<"b cons..."<<a+b<<endl;
    }
    ~b()
    {
        cout<<"b dis..."<<endl;
    }
    void print()
    {
        cout<<"a=b"<<endl;
    }
};
class c
{
    public:
    c()
    {
      cout<<"c cons..."<<endl;
    }
    ~c()
    {
        cout<<"c dis..."<<endl;
    }
};
class d:public a,public c,public b
{
     public:
    d():a(2),b(2,3)
    {
      cout<<"d cons..."<<endl;
    }
    ~d()
    {
        cout<<"d dis..."<<endl;
    }
};
int main()
{
    d ob;

}
