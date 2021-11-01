#include <iostream>
using namespace std;
bool ispowtwo(int n)
{
    return (n&&!(n&(n-1)));
}
int main()
{
    int n;
    cin>>n;
    if(ispowtwo(n))
    {
        cout<<"The num can be expressed as power of two"<<endl;
    }
    else
    {
        cout<<"The num can't be expressed as power of two"<<endl;
    }
}
