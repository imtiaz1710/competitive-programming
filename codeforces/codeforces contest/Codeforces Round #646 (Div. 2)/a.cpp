#include <iostream>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, x;
        cin >> n >> x;
        ll a[n];
        ll e = 0, o = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] % 2 == 1)
                o++;
            else
                e++;
        }

        if (o == 0)
        {
            cout << "NO" << endl;
            continue;
        }
        else
        {
            if (o % 2 == 0)
                o--;
            
            if(x%2==0)
            {
                if(o>x)
                 x=1;
                else
                 x-=o;
            }
            else
            {
                x -= o;
            }
            x-=e;
            x=max(0ll,x);
        }

        if(!x)
        cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }
}