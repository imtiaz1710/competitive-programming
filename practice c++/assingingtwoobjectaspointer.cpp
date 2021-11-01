#include <iostream>
#include <string.h>
using namespace std;
class A
{
public:
    char *p;
    A()
    {
        p=new char[50];
    }

};
int main()
{
    A ob1,ob2;
    strcpy(ob1.p,"imtiaz");
    strcpy(ob2.p,"moin");
    cout<<ob1.p<<endl<<ob2.p<<endl;
    ob1=ob2;
    strcpy(ob1.p,"sumaya");
     cout<<ob1.p<<endl<<ob2.p<<endl;
     delete ob1.p;
     ob1.p=new char[10];
     strcpy(ob1.p,"imtiaz");
      cout<<ob1.p<<endl<<ob2.p<<endl;
}
