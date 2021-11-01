#include <iostream>
using namespace std;
int main()
{
    int a;
    int b,c;
    cin>>a>>b;
    try
    {
        if(b==0)
            throw b;
        c=a/b;
        cout<<c<<endl;
    }
    catch(...)
    {
        cout<<"error!"<<endl;
    }
    return 0;
}
