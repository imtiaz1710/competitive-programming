#include <iostream>
using namespace std;
namespace f1
{
    int n=10;
    void fun1()
    {
        cout<<n<<endl;
    }
}
namespace f2
{
    int n=20;
    void fun2()
    {
        cout<<n<<endl;
    }
}
int main()
{
    f1::fun1(); ///calling function using :: operator
    f2::fun2();
    using namespace f1; ///f1 namespace create scope for main and we call fun1() without resulation operator
    fun1();
    using namespace f2;
    fun2();
    namespace n=f1; ///set a new name for f1 namespace
    n::fun1();
}
