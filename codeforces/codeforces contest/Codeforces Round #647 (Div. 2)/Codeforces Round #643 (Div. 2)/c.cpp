#include <bits/stdc++.h>
#define ll long long
#define us unsigned short int
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;
bool is_valid(int a,int b,int c)
{
    if(a+b>c) return true;
    else return false;
}

int main(){
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    ll cnt=0;
    for (ll k = c; k <= d; k++)
    {
        for (ll i = b; i >= a; i--)
        {
            for (ll j = c; j >= b; j--)
            {
                if(!is_valid(i,j,k)) break;
                cnt++;
            }
        }
    }
    
    cout<<cnt<<endl;
    
    return 0;
}