#include <iostream>
using namespace std;
int main()
{
    char *a;
//    char b[30];
    a=new char[30];
    cin.getline(a,30);

    cout<<a<<endl<<cin.gcount()<<endl;
//    cin.getline(b,30);

//    cout<<b<<endl;

}
