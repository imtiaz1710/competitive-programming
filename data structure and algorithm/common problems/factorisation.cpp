#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n,f;
    cin>>n;
    for(int i=2;i<=sqrt(n)+2;i++)
    {
        f=0;
        while(n%i==0)
        {
            if(f==0)
            {
                cout<<i<<" to the power ";
                f++;
                n=n/i;
                continue;
            }
            n=n/i;
            f++;
        }
        if(f!=0)
            cout<<f<<endl;
    }
    if(n!=1)
    cout<<n<<" to the power "<<1<<endl;
    return 0;
}
