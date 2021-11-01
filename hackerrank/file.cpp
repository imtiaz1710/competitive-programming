#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream file;
    file.open("D:\\competitive programming\\practice c++\\file.txt");
    file<<"This is my first file programme"<<endl;
    file<<"My name is Imtiaz"<<endl;
    file<<"I want to become a good programme"<<endl;
    file.close();
    return 0;
}
