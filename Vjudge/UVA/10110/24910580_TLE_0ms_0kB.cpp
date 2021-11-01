#include <bits/stdc++.h>
#define ll long long
#define fin freopen("in.txt", "r", stdin)
#define fout freopen("out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;


int main(){
    ll n;
    scanf("%lld",&n);
    while(n){
    ll sr=sqrt(n)+1;
    ll div_count=1;
    for(ll i=2;i<=sr;i++)
    {
        ll pow_count=0;
        while(n%i==0)
        {
            n/=i;
            pow_count++;
        }
        div_count*=pow_count+1;
        if(n==1) break;
    }
    if(n>1) div_count*=2;
    //cout<<div_count<<endl;
    if(div_count%2==0)
        printf("no\n");
    else
        printf("yes\n");
    scanf("%lld",&n);
    }
    return 0;
}