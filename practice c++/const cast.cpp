#include<iostream>
using namespace std;
class x
{
    int value;
public:
    x(int i)
    {
        value =i;
    }
    void changevalue() const
    {
        (const_cast<x*>(this))->value=value+50;
        cout<<"value:"<<value<<endl;
    }
};
int main()
{
    const int i=10;
    int *ip;
    ip=const_cast<int*>(&i);
    *ip=3;
    cout<<*ip<<endl<<i;
}
