#include <iostream>
#include<fstream>
using namespace std;
class a
{
public:
    static int b;
};
int a::b;
int main()
{   string c;
    fstream ob;
    ob.open("D:\\competitive programming\\practice c++\\file input.txt",ios::in);
    if(!ob)
        cout<<"Error!"<<endl;
    while(!ob.eof()){
//        ob>>c;
//        cout<<c<<"  ";
        cout.put(ob.get());
    }
    ob.close();
}
