#include <iostream>
using namespace std;
class a
{
public:
    void print(){cout<<"msg from a class";}
};
class b:public a
{
public:
    void print1(){cout<<"msg from b class";}
};
void fun() throw(a,int,b)
{
    a x;
    b y;
    int n;
    cin>>n;
    if(n==1)
        throw x;
    if(n==2)
        throw y;
    if(n==3)
        throw n;
}

int main()
{

    try
    {
        fun();
    }
    catch(b y)
    {
        cout<<"derived"<<endl;
        y.print();
    }

    catch(a x)
    {
        cout<<"base"<<endl;
        x.print();
    }
    catch(int e)
    {
        cout<<"int"<<endl;
    }

}
