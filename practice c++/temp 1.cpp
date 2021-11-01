#include<iostream>
using namespace std;
template <class T>
T fun(T a[],int n)
{
    int i;
    sum=0;
    for(i=0;i<n;i++)
    {
    sum+=a[i];
    }
//    printf("%d\n",sum);
cout<<sum<<endl;
}
int main()
{
    int a[]={1,2,3};
    double b[]={1.2,2.2,3.3};
    fun(a,3);
    fun(b,3);
    return 0;
}
