#include <bits/stdc++.h>
#define ll long long
#define fin freopen("in.txt", "r", stdin)
#define fout freopen("out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
#define mx (int)1e3+9
using namespace std;
vector<pair<int,int>> value;
int mark[mx];
vector <int> prime; 
void seive()
{
    mark[0]=mark[1]=1;
    for(int i=4;i<mx;i+=2) mark[i]=1;
    for(int i=3;i*i<=mx;i+=2)
        for(int j=i*i;j<mx;j+=i+i)
            mark[j]=1;
    for(int i=0;i<mx;i++)
        if(mark[i]==0) 
            prime.push_back(i);
}
bool cmp(pair<int,int> a,pair<int,int> b)
{
    if(a.second==b.second)
        return a.first>b.first;
    return a.second<b.second;
}
void ordering()
{
    value.push_back(make_pair(1,1));
    for(int i=2;i<=1000;i++)
    {
        int sr=sqrt(i);
        int tmp=i;
        int div_count=1;
        for(int j=0;j<prime.size() && sr>=prime[j];j++)
        {
            int pow_count=0;
            while (tmp%prime[j]==0)
            {
                tmp/=prime[j];
                pow_count++;
            }
            div_count*=pow_count+1;
            if(tmp==1) break;
        }
        if(tmp>1) div_count*=2;

        value.push_back(make_pair(i,div_count));
    }
    sort(value.begin(),value.end(),cmp);

}
int main(){
    seive();
    ordering();
    int t;
    cin>>t;
    int tc=0;
    while(t--)
    {
        int n;
        cin>>n;
        printf("Case %d: %d\n",++tc,value[n-1].first);
    }
    return 0;
}