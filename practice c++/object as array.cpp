#include <iostream>
#include <string.h>
using namespace std;
class A
{
public:
    char *p;
    A(int a)
    {
        p=new char[50];
        cout<<"cons..."<<a<<endl;

    }
    ~A()
    {
        delete(p);
        cout<<"des..."<<endl;
    }
    print(char *a)
    {
        strcpy(p,a);
        cout<<"Name:"<<p<<endl;
    }
};
class B
{
public:
    B(int a,int b)
    {
        cout<<"class B"<<a+b<<endl;
    }
};
int main()
{
    A ob[3]={1,2,3};
    ob[0].print("Imtiaz");
    ob[1].print("istiak");
    ob[2].print("sumaya");
    B ob1[2][2]={{B(1,2),B(3,4)},{B(3,4),B(5,6)}};
}

