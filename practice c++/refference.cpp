#include <iostream>
using namespace std;
void swap1(int& a,int& b)
{
    int temp;
    temp=b;
    b=a;
    a=temp;
}
int main()
{
    int a=5,b=10;
    swap1(a,b);
    cout<<"a"<<a<<endl<<"b"<<b;
    return 0;
}
