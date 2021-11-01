#include <iostream>
using namespace std;
template <class T>
T add(T a,T b)
{
    return (a+b);
}
int main()
{
   cout<<add(2,2)<<endl;
   cout<<add(2.2,2.0)<<endl;



}
