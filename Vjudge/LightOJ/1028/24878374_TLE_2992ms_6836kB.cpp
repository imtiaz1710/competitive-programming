#include <bits/stdc++.h>
#define ll long long
#define fin freopen("in.txt", "r", stdin)
#define fout freopen("out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
#define mx (int)1e6+7
using namespace std;
int mark[mx];
vector <int> prime;
void seive()
{
    mark[1]=mark[0]=1;
    for(int i=4;i<mx;i+=2) mark[i]=1;
    for(int i=3;i*i<=mx;i+=2)
        for(int j=i*i;j<mx;j+=i+i)
            mark[j]=1;
    for(int i=0;i<mx;i++) 
        if(mark[i]==0)
            prime.push_back(i);
}

ll num_of_div(ll n)
{
    int sq=n;
    int div_count=1;
    for(int i=0;i<prime.size() && prime[i]<= sq;i++)
    {
        int cnt=0;
        while(n%prime[i]==0)
        {
            n/=prime[i];
            cnt++;
        }
        if(cnt) div_count*=cnt+1;
    }
    if(n>1) div_count*=2;

    return div_count-1;
}

int main(){
    seive();
    int t;
    cin>>t;
    while (t--)
    {
        ll n;
        cin>>n;
        cout<<num_of_div(n)<<endl;

    }
    return 0;
}