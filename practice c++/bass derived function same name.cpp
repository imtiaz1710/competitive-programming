#include <iostream>
using namespace std;
class A
{
public:
    int getval()
    {
        cout<<"this is bass class"<<endl;
    }

};

int main()
{
    A ob;

    ob.A::getval();


}
