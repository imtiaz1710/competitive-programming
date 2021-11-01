#include <iostream>
using namespace std;
template <class T>
class abc
{
public:
    int n;
    T arr[5];
   void setv(int x)
    {
        n=x;
    }
    void print()
    {
        for(int i=n-1;i>=0;i--)
        {
            cout<<arr[i]<<endl;
        }
    }
};
int main()
{
    abc<int> x;
    abc<string> y;
    x.setv(5);
    y.setv(5);
    for(int i=0;i<5;i++)
    {
        cin>>x.arr[i];
        cin>>y.arr[i];
    }
    x.print();
    y.print();
    return 0;
}
