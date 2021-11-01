#include<iostream>
using namespace std;
class A
{
    int length,width;
public:
    A(){length=width=0;}
    A(int x,int y){length=x;width=y;}
    void getval()
    {
        cout<<"length:"<<length<<endl<<"width:"<<width<<endl;
    }
    A operator+(int x);
    A operator-(int x);
    A operator-(A ob);
    A operator+=(A ob);
    A operator++();
};
A A::operator+(int x)
{
    width=width+x;
    length=length+x;
    return *this;
}
A A::operator-(int x)
{
    width=width-x;
    length=length-x;
    return *this;
}
A A::operator++()
{
    width++;
    length++;
    return *this;
}
A A::operator-(A ob)
{
    width=width-ob.width;
    length=length-ob.length;
    return *this;
}
A A::operator+=(A ob)
{
    width+=ob.width;
    length+=ob.length;
    return *this;
}
int main()
{

///    A operator+(int x);
///   A operator-(int x);
///    A operator-(A ob);
///    A operator+=(A ob);
///    A operator++()
    A ob(3,4),ob1(10,20),ob2(20,30);
    ob.getval();
    ob1=ob1+10;
    ob1.getval();
    ob2=ob2-20;
    ob2.getval();
    ob1=ob1-ob;
    ob1.getval();
    A ob3(20,10),ob4(30,40);
    ob3+=ob4;
    ob3.getval();
   A obj(3,4);
   ++obj;
   obj.getval();

}
