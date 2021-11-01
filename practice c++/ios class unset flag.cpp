#include <iostream>
using namespace std;
int main()
{
    cout<<2.34<<endl;
    cout.unsetf(ios::dec);
    cout.setf(ios::hex);
    cout<<100<<endl;
//    cout.setf(ios::showbase);

    cout.unsetf(ios::hex);
//    cout.setf(ios::dec);
    cout.setf( ios::scientific);
//    cout.setf(ios::oct);
    cout<<2333.333<<endl;
    ios::fmtflags flag;
    flag=cout.flags();
    if(flag & ios::hex)
        cout<<"flag is set"<<endl;
    else
        cout<<"flag is unset"<<endl;
}
