#include <iostream>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        ll x1,x2,y1,y2;
        cin>>x1>>y1>>x2>>y2;
        cout<<(x2-x1)*(y2-y1)+1<<endl;
    }
    
}