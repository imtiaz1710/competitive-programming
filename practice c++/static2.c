#include <iostream>
using namespace std;
class A
{
    static int x;
    a()
    {
        x++;
    }
  static void print()

};
void A::print()
{
    cout<<x;
}
int A::x;
int main()
{
    A s1,s2,s3,s4;
    A::print();
}
