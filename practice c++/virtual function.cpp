#include <iostream>
using namespace std;
class base
{
public:
   virtual void msg()
    {
      cout<<"msg from base"<<endl;
    }
};
class derived1:public base
{
    public:
    void msg()
    {
      cout<<"msg from derived1"<<endl;
    }
};
int main()
{   base *ob;
    derived1 ob1;
    ob=&ob1;
    ob->msg();
    return 0;
}
