#include <iostream>
using namespace std;

class A
{
public:
   static int X;
   int height,weight;
   A(){X++;height=weight=0;}
   A(int x,int y){X++;height=x;weight=y;}
   void setval(int x,int y){height=x,weight=y;}
   void showval()
   {
       cout<<"height:"<<height<<endl<<"weight:"<<weight<<endl<<endl;
   }
   A* operator+(int x)
   {

       this->height=this->height+x;
       this->weight=this->weight+x;
       return this;
   }
};
 int A::X=0;
int main()
{
    A a1(50,75),*a2;
    a2=new A;
    a1.showval();
    a2->setval(10,15);
    a2->showval();
    a2=a1+25;
    a2->showval();


}
