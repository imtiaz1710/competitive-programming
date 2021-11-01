#include <iostream>
using namespace std;
class A
{
public:
    A(int a,int b)
    {
        cout<<a+b<<endl;
    }
};
class B:public A
{
    public:
    B(int i,int j):A(i,j)
    {
        cout<<i*j<<endl;
    }
};
int main()
{
B ob(3,2);

}
