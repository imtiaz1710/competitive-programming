#include<iostream>
#include <string.h>
using namespace std;
class abc
{
   public:
       ~abc()
       {
           cout<<"destructing..."<<endl;
       };
       abc()
       {
           cout<<"constructing..."<<endl;
       }
       char arr[30];
       void setval(char *ch)
       {
           strcpy(arr,ch);
       }
       void print()
       {
           cout<<arr<<endl;
       }
};
abc fun()
{
   abc ob;
   ob.setval("my name is");
   return ob;
}
int main()
{
    abc ob1;


    ob1=fun();
    ob1.print();
}
