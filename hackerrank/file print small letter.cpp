#include <fstream>
#include <iomanip>
#include <iostream>
using namespace std;
int main()
{
   fstream ob;
   ob.open("D:\\competitive programming\\practice c++\\small letter.txt");
   if(!ob)
   cout<<"file error!"<<endl;
   else
    cout<<"file create successful!"<<endl;
   for(int i='a';i<='z';i++)
   ob<<setw(4)<<(char)i;
}
