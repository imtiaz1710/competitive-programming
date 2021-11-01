#include <bits/stdc++.h>
#define ll long long
#define us unsigned short int
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
#define maxn 1000
using namespace std;

bool cmp(pair<int,int> a,pair<int,int> b)
{
    //cout<<(double)b.second/b.first<<" "<<(double)a.second/a.first<<endl;
    return (double)b.second / b.first < (double)a.second / a.first ;
}
int main(){
    int n;
    cin>>n;
    vector<pair<int, int>> wc(n);
    for (int i = 0; i < n; i++)
    cin>>wc[i].first;
    for(int i=0;i<n;i++)
    cin>>wc[i].second;
    sort(wc.begin(),wc.end(),cmp);

    
    int cap;
    cin>>cap;
    int total=0;
    for (int i = 0; i < n && cap!=0; i++)
    {
        if(cap>=wc[i].first)
        {
            total+=wc[i].second;
            cap-=wc[i].first;
        }
        else
        {
            total+=((double)wc[i].second/wc[i].first)*cap;
            cap=0;
        }
        
    }
    cout<<total<<endl;
    
    

    
    return 0;
}