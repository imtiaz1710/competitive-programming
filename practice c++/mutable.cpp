///After declaring a variable in mutable,we can change its value from const function...

#include <iostream>
#include <string.h>
using namespace std;
class a
{
    mutable char str[20];
public:
    void setf(char* s) const
    {
        strcpy(str,s);
        cout<<str<<endl;
    }
};
int main()
{
    a ob;
    ob.setf("Imtiaz");
}
