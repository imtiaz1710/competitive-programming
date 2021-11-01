#include <iostream>
using namespace std;
void fun()
{
    try
    {
        throw 1;
    }
    catch(int)
    {
        cout<<"fun"<<endl;
        throw 2.1;
    }

}
int main()
{
    try
    {
        fun();
    }
    catch(double)
    {
        cout<<"main"<<endl;
    }
}
