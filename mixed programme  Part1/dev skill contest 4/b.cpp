#include <bits/stdc++.h>
#define ll long long
#define fin freopen("/home/imtiaz/Desktop/dev skill contest 4/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/dev skill contest 4/out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
#define mx 1e6+7

using namespace std;

ll mark[int(mx)];
vector <ll> prime;
void is_prime()
{
    mark[0]=mark[1]=1;
    for(ll i=4;i<mx;i+=2) mark[i]=1;
    for (ll i =3 ; i*i<mx; i+=2)
    {
        for(ll j=i*i;j<mx;j+=i+i)
        {
            mark[j]=1;
        }
    }
    for (ll i = 0; i < mx; i++)
    {
        if(!mark[i]) 
        {
            prime.push_back(i);
        }
        
    }
}

bool is_divisable(ll n,ll m)
{
    vector <pair<ll,ll>> ppf;
    ll limit=sqrt(m);
    for (ll i = 0; prime[i]<=limit && i<prime.size(); i++)
    {
        
            ll cnt=0;
            while (m%prime[i]==0)
            {
               
                m=m/prime[i];
                cnt++;
            }
            if(cnt) ppf.push_back(make_pair(prime[i],cnt));
        if(m==1) break;
    }
    if(m>1) ppf.push_back(make_pair(m,1));
  
    bool res_flag=0;
    for (ll i = 0; i < ppf.size(); i++)
    {
       
        ll tmp=ppf[i].first;
        ll pow_count=0;
        while (tmp<=n)
        {
           
            pow_count+=n/tmp;
            tmp*=ppf[i].first;
           
        }
        if(pow_count<ppf[i].second)
        {
            res_flag=1;
            break;
        }
    }
    return !res_flag;

    
}
int main(){
   
    is_prime();
    ll n,m;
    while (cin>>n>>m)
    {
       
        if(is_divisable(n,m))
        printf("%lld divides %lld!\n",m,n);
        else
        {
        printf("%lld does not divide %lld!\n",m,n);
        }
       
    }
    
    return 0;
}