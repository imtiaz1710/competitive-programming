#include <iostream>
using namespace std;
int i;
template <typename t=char,int n=5>
class A
{
public:
    t arr[n];
    A();
    void print();
};
template <typename t,int n>
A<t,n>::A()
{
     for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
}
template <typename t,int n>
void A<t,n>::print()
{
     for(i=n-1;i>=0;i--)
        {
            cout<<arr[i]<<endl;
        }
}
int main()
{
    A<int,5>ob1;
    A<string,5>ob2;
    A< >ob3;

    ob1.print();
    ob2.print();
    ob3.print();
    return 0;
}
