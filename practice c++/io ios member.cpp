#include <iostream>
using namespace std;
int main()
{
    cout.setf(ios::showpos);
    cout<<12.3<<endl;
    cout.setf(ios::scientific);
    cout<<12.445<<endl;
    cout<<12.445<<endl;
    cout.setf(ios::uppercase);
    cout<<12.4<<endl;
//    cout<<'a'<<endl;
}
