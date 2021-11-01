#include <iostream>
using namespace std;
class  A
{

public:
int height,width;
    A(){height=width=0;}
    A(int x,int y){height=x;width=y;}
    getval()
    {
        cout<<"heigth:"<<height<<endl<<"width:"<<width<<endl;
    }
    friend A operator+(A ob,int x);
};
A operator+(A ob,int x)
{
    A temp;
    temp.height=ob.height+x;
    temp.width=ob.width+x;
    return temp;
}
int main()
{
    A ob(30,40),ob1;
    ob.getval();
    ob1.getval();
    ob1=ob+10;
    ob1.getval();

}


