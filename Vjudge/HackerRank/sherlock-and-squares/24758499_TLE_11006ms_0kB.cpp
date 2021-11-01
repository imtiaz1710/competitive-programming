#include <iostream>
#include <math.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        int cnt=0;
        for(int i=a;i<=b;i++)
        {
            int d=sqrt(i);
            if(d*d==i)
            cnt++;
        }
        cout<<cnt<<endl;
    }
}
