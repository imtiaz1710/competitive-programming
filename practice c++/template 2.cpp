#include <iostream>
using namespace std;
template <class T1>
void templ(T1 t1)
{
    cout<<"type 1:"<<endl<<t1<<endl;
}
template <class T1,class T2>
void templ(T1 t1,T2 t2)
{
    cout<<"type 2:"<<endl<<t1<<endl;
    cout<<t2<<endl;

}
template <class T1,class T2,class T3>
void templ(T1 t1,T2 t2,T3 t3)
{
    cout<<"type 3:"<<endl<<t1<<endl;
    cout<<t2<<endl;
    cout<<t3<<endl;
}
int main()
{
    templ("imtiaz",'i',5);
    templ("Mehedi",7.8);
    templ("Moin");

}

