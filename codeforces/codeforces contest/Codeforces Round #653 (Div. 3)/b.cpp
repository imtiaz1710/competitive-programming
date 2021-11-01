#include <bits/stdc++.h>
#define ll long long
#define us unsigned short int
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;


int main(){
   // fin;
    ll t;
    cin>>t;
    while (t--)
    {
        ll n;
        cin>>n;
        ll cnt=0;
        while (n%6==0)
        {
            n/=6;
            cnt++;
        }
        bool f=0;
        if(n%2==0)
        {
            if((n*2)%6!=0) f=1;
            else
            {
                cnt++;
                n *= 2;
                while (n % 6 == 0)
                {
                    cnt++;
                    n /= 6;
                }
                if (n != 1)
                    f = 1;
            }
            
        }
        else if(n!=1 and n%2==1 and (n*2)%6!=0)
        {
            f=1;
        }
        while (n!=1 and n % 2 == 1 and (n * 2) % 6 == 0)
        {
            cnt++;
            n*=2;
            while (n%6==0)
            {
                cnt++;
                n/=6;
            }
            
        }
        if(f or n!=1) cout<<-1<<endl;
        else cout<<cnt<<endl;
    }
    
    return 0;
}