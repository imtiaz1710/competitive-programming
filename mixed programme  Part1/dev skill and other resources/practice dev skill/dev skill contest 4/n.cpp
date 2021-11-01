#include <bits/stdc++.h>
#define ll long long
#define fin freopen("in.txt", "r", stdin)
#define fout freopen("out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
#define mx (int)1e5
using namespace std;
vector <ll> prime;
bool mark[mx];
void seive()
{
    mark[0]=mark[1]=1;
    for(ll i=4;i<mx;i+=2) mark[i]=1;
    for(ll i=3;i*i<=mx;i+=2)
        for(ll j=i*i;j<mx;j+=i+i)
            mark[j]=1;
    for(ll i=0;i<mx;i++)
        if(mark[i]==0) prime.push_back(i);

}

int main(){
    seive();
    ll n;
    scanf("%lld",&n);
    while(n){
    ll sr=sqrt(n)+1;
    ll div_count=1;
    for(ll i=0;prime[i]<=sr && i<prime.size();i++)
    {
        ll pow_count=0;
        while(n%prime[i]==0)
        {
            n/=prime[i];
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