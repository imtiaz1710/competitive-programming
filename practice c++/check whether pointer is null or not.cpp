#include <iostream>
using namespace std;

int main()
{
    int *ptr;
    ptr=new int[600000000];
    if(ptr==NULL)
    {
        cout<<"error!"<<endl;
        return (1);
    }
    *ptr=50;
    cout<<*ptr;
    return 0;
}
