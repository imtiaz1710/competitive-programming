#include <iostream>
using namespace std;
template <class T1,class T2,class T3>
class A
{
private:
    T1 a;
    T2 b;
    T3 c;
public:
    A(T1 x,T2 y,T3 z)
    {
        a=x;
        b=y;
        c=z;
    }
    void getval();
};
template <class T1,class T2,class T3>
void A <T1,T2,T3>::getval()
{
        cout<<a<<endl;
        cout<<b<<endl;
        cout<<c<<endl;
}
int main()
{
    A<int,double,char>ob1(5,10.10,'i');
    A<bool,string,char>ob2("TRUE","Imtiaz",'M');
    ob1.getval();
    ob2.getval();
    return 0;
}
