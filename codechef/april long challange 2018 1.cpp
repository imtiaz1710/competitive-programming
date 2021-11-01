#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n,k;
    int a,b,c;
    a=b=c=0;
    cin>>n;
    vector <int> v;
    vector <int> v1;

    for(int i=0;i<n;i++)
    {
        cin>>k;
        v.push_back(k);
    }
    for(int i=0;i<n;i++)
    {
        cin>>k;
        v1.push_back(k);
    }
    for(int i=0;i<n;i++)
    {
        if(a==0&&v1[i]==1)
            a=v[i];
        else if(b==0&&v1[i]==2)
            b=v[i];
        else if(c==0&&v1[i]==3)
            c=v[i];
        else if(v1[i]==1&&a>v[i])
            a=v[i];
        else if(v1[i]==2&&b>v[i])
            b=v[i];
        else if(v1[i]==3&&c>v[i])
            c=v[i];
    }
    if(a+b<c&&a+b!=0)
        cout<<a+b;
    else
        cout<<c;
    return 0;
}
