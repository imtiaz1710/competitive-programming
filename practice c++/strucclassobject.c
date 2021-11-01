#include <iostream>
using namespace std;
struct A
{
    int a;
};
class B
{
public:
    A var;
    A var1;
    void print()
    {
        var.a=5;
        cout<<var.a<<endl;
        cout<<var1.a<<endl;

    }

};
int main()
{
    B ob;
    ob.var1.a=10;
    ob.print();
    return 0;
}
