#include <iostream>
#include <string.h>
using namespace std;
class A
{
    char name[25];
    int height;
    int weight;
public:

    A()
    {
        strcpy(name,"Imtiaz");
        height=5;
        weight=50;
    }
    A(char *str,int x,int y)
    {
        strcpy(name,str);
        height=x;
        weight=y;
    }
   friend  void operator<<(ostream &o,A ob);

};
void operator<<(ostream &o,A ob)
{
    o<<"Name:"<<ob.name<<endl;
    o<<"Height:"<<ob.height<<"ft"<<endl;
    o<<"Weight:"<<ob.weight<<"Kg"<<endl;
}
int main()
{
    A ob,ob1("MOIN",5,40);
    cout<<ob;
    cout<<endl;
    cout<<ob1;
}
