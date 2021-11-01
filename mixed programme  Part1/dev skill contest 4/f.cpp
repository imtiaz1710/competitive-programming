#include <bits/stdc++.h>
#define ll long long
#define fin freopen("in.txt", "r", stdin)
#define fout freopen("out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
#define mx (int)1e6
using namespace std;
bool mark[mx];
vector <ll> prime;

void seive()
{
    mark[0]=mark[1]=1;
    for(ll i=4;i<mx;i+=2) mark[i]=1;
    for(ll i=3;i*i<=mx;i+=2)
        for(ll j=i*i;j<mx;j+=i+i) mark[j]=1;
    for(ll i=0;i<mx;i++) if(!mark[i]) 
    {
        prime.push_back(i);

    }
}

bool cmp(pair<ll,ll> a,pair<ll,ll> b)
{
    if(a.second==b.second)
    {
        return a.first<b.first;
    }
    return a.second<b.second;
}

void segmented_seive(ll l,ll r)
{
    
    bool tmp_mark[r-l+1];
    memset(tmp_mark,0,sizeof tmp_mark);
    vector <pair<ll,ll>> distance;
    if(l==1) tmp_mark[0]=1;
    ll sq=sqrt(r)+1;
    for(ll i=0;prime[i]<=sq;i++) // ai loop e problem
    {
       

        ll tmp=(l/prime[i])*prime[i];
        tmp=(tmp<l)? tmp+prime[i]:tmp;
        ll indx=tmp-l;
        if(tmp_mark[indx]==0)
        {
            if(tmp==prime[i])
            {
                indx+=prime[i];
            }
            for(ll j=indx;j<=r;j+=prime[i])
            {
                tmp_mark[j]=1;
            }
        }
        cout << prime[i] << " " << sq << endl; //check the values relating to the condition
    }
    ll tmp;
    ll cnt=0;
    for(ll i=0;i<r-l+1;i++)
    {  
        if(!tmp_mark[i])
        {
            cnt++;
            if(cnt==2)
            {
                distance.push_back(make_pair(l+tmp,i-tmp));
                cnt=1;
            }
            tmp=i;
        }
    }
    sort(distance.begin(),distance.end(),cmp);
    if(distance.size())
    {
        ll dl=distance.size()-1;
        ll i=distance.size()-1;
        while(i-1>=0 && distance[i].second==distance[i-1].second)
        {
            i--;
        }
        dl=i;

        printf("%lld,%lld are closest, %lld,%lld are most distant.\n",distance[0].first,distance[0].first+distance[0].second,distance[dl].first,distance[dl].first+distance[dl].second);
    }
    else
        printf("There are no adjacent primes.\n");
}


int main(){
    seive();
    ll l,r;
    while(cin>>l>>r)
    {
        segmented_seive(l,r);
    }
    return 0;
}