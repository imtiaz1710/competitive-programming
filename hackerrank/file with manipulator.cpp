#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
int main()
{
    ofstream fout("D:\\competitive programming\\practice c++\\file manip.txt");
    if(!fout)
    {
        cout<<"file error"<<endl;
        return 0;
    }
    fout<<" Decimal Octal Hexadecimal "<<endl;
    for(int i=0;i<=100;i++)
    {
        fout<<dec<<setw(4)<<i<<setw(7)<<oct<<i<<setw(8)<<hex<<i<<endl;
    }
    fout.close();
    return 0;
}
