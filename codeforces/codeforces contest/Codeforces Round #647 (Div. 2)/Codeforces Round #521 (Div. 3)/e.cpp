#include <bits/stdc++.h>
#define ll long long
#define us unsigned short int
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;
vector <pair<int,int>> freq;

bool cmp(pair<int,int> a,pair<int,int> b)
{
    return a.second>b.second;
}

int total(int mx)
{
    int cnt=mx;
    if(mx%2==1) return cnt;
    mx/=2;
    for (int i = 1; i < freq.size(); i++)
    {
        if(freq[i].second>=mx){
            cnt+=mx;
            if(mx%2==1) break;
            mx/=2;
        }
        else
        {
            break;
        }
    }
    return cnt;
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n ; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    int cur=a[0];
    int cnt=0;
    for (int i = 0; i < n; i++)
    {
        if(cur==a[i]) cnt++;
        else
        {
            freq.push_back({cur,cnt});
            cnt=1;
            cur=a[i];
        }
        
    }
    freq.push_back({cur,cnt});
    sort(freq.begin(),freq.end(),cmp);
  // for(int i=0;i<freq.size();i++) cout<<freq[i].first<<" "<<freq[i].second<<endl;
    int mx=freq[0].second;
    int ans=0;
    while (mx)
    {
        ans=max(ans,total(mx));
        mx--;
    }
    cout<<ans<<endl;
    return 0;
}