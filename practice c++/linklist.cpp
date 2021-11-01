#include<iostream>
using namespace std;
class A
{
public:
    int x;
    int getval()
    {
        cout<<x<<endl;
    }
    A *link;
};
int main()
{
    A ob,ob1;
    ob.x=5;
    ob.getval();
    ob1.x=10;
    ob1.getval();

    ob.link=&ob1;
    (ob.link)->getval();
}
