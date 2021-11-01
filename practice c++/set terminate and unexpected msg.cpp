#include <iostream>
using namespace std;
void fun() throw(int)
{
    int n;
    cin>>n;
    if(n==1)
        throw n;
    if(n==2)
        throw 1.2;
}
void T()
{
    cout<<"terminate"<<endl;
}
void E()
{
    cout<<"enexpected"<<endl;
}
int main()
{
    set_terminate(T);
    set_unexpected(E);
    try
    {
        fun();
    }
    catch(int)
    {
        cout<<"int";
    }
    catch(double)
    {
        cout<<"double";
    }
}
