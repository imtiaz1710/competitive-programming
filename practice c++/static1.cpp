#include <iostream>
using namespace std;
class A
{
    public:
    static int a;
    int x;
    void change()
    {
        a=x;
    }
    void result()
    {
        cout<<a<<endl;
    }

};
int A::a;

int main()
{
    A ob1,ob2;
    ob1.x=5;
    ob1.change();
    ob1.result();
    ob2.result();
}

