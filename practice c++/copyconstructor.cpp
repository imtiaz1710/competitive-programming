#include <iostream>

using namespace std;
class A
{
public:
    int *p;
    int a;
    A()
    {
        p=new int(5);
    }
    void print()
{
    cout<<*p<<endl<<a<<endl;

}
A(A &ob)
{
    p=new int(10);
    a=10000000;
}
};

    int main()
{
    A ob;
    ob.a=30;
    ob.print();
    A ob1=ob;
    ob1.print();
    *ob1.p=100;
    ob1.print();
    ob.print();
}
