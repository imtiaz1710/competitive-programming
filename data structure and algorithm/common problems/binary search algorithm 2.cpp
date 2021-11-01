#include <iostream>
#include <algorithm>
using namespace std;
void binarysearch(int a[],int n,int x)
{
    int b;
    int k=0;
    sort(a,a+n);
    for(b=n/2;b>=1;b/=2)
    {
        while(k+b<n&& a[k+b]<=x) k+=b;


    }

    if(a[k]==x)
        cout<<"item found"<<endl;
    else
        cout<<"item not found"<<endl;
}
int main()
{
    int n;
    cout<<"Enter the array size: "<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the array's elements : "<<endl;
    for(int i=0;i<n;i++)
        cin>>a[i];
    int x;
    cout<<"Enter the searched element :"<<endl;
    cin>>x;
    binarysearch(a,n,x);
}
