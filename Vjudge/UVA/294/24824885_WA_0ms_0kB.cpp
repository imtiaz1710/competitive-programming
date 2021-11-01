#include <bits/stdc++.h>
#define ll long long
#define fin freopen("in.txt", "r", stdin)
#define fout freopen("out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
#define mx (int)1e5+9
using namespace std;
vector <ll> prime; 


void prime_numbers()                      //generating primes
{
    bool mark[(int)mx+1];
    mark[0]=mark[1]=1;
    for (ll i = 4; i <=(int)mx; i+=2) mark[i]=1;
    for (ll i = 3; i*i <= (int)mx ; i+=2)
    {
        for (ll j = i*i; j <=(int)mx; j+=i+i)
        {
            mark[j]=1;
        }
    }
    for (ll i = 0; i <= (int)mx; i++)
    {
        if(!mark[i]) 
        {
            prime.push_back(i);
            //cout<<i<<endl;
        }
        
    }

}


ll divisor_count(ll n)
{
    ll limit=sqrt(n);
    int div_count=1;
    for (ll i = 0; prime[i]<=limit && i<prime.size(); i++)
    {
        int power_count=0;
        while (n%prime[i]==0)
        {
            n/=prime[i];
            power_count++;
        }
        if(power_count)
        div_count*=power_count+1;

        if(n==1) break;
    }
    if(n>1)
    {
        div_count*=2;
    }
    return div_count;
}




int main(){
    fin,fout;
    prime_numbers();
    int t;
    cin>>t;
    while (t--)
    {
        ll l,u;
        cin>>l>>u;
        ll hight=0;
        pair<ll,ll> res;
        for (ll i = l; i <= u; i++)
        {
            ll div_count=divisor_count(i);
            if(div_count>hight)
            {
                res.first=i;
                res.second=div_count;
                hight=div_count;
            }
        }
        printf("Between %lld and %lld, %lld has a maximum of %lld divisors.\n",l,u,res.first,res.second);
        
    }
    return 0;
}