#include <iostream>
using namespace std;
class A
{
    int x,y;
public:
    A(int a,int b)
    {
        x=a;
        y=b;

    }
    void add()
    {
        cout<<x+y<<endl;
    }
};
int main()
{
    A ob[3]={A(1,1),A(2,2),A(3,3)};
    A *ptr;
    ptr=ob;
    for(int i=0;i<3;i++){
        ptr->add();
    ++ptr;}
}
