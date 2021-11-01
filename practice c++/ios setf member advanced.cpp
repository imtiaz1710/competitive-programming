#include <iostream>
using namespace std;
int main()
{
    cout.setf(ios::showpos|ios::showpoint);
    cout<<9933.99<<endl;
    cout.setf(ios::showpoint,ios::showpos);
    cout.put('\n');
    cout.write("my name is imtiaz",18);
    cout.precision(7); ///number of digit after decimal point
    cout<<3.14<<endl;
    cout.fill('.');///fill all the gape in output field

    cout<<"Name:";
    cout.width(12);///output field size
    cout<<"Imtiaz"<<endl;
    cout.fill('-');
    cout<<"Dis:";
    cout.width(12);
    cout<<"Gazipur"<<endl;
}
