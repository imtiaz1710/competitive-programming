///1.use to casting one pointer type to another
///2.use to casting one integral type variable to pointer

#include <iostream>
using namespace std;
int main()
{
    int i=10,*ip;
    ip=reinterpret_cast<int*>(i);
    cout<<ip<<endl;
    ip++;
    cout<<ip<<endl;
    i=reinterpret_cast<int>(ip);
    cout<<i<<endl;
}
