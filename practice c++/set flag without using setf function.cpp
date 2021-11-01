#include <iostream>
using namespace std;
int main()
{
   ios::fmtflags f;
   f=ios::showpos | ios::showpoint;
   cout.flags(f);
   cout<<100.2<<endl;
   cout.width(20);
   cout.fill('.');
   cout<<left<<"imtiaz:"<<endl;
}
