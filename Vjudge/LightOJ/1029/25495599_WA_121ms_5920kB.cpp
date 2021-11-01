#include <bits/stdc++.h>
#define ll long long
#define us unsigned short int
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
#define maxn 107
#define inf 1000000000
using namespace std;
vector<pair<int,int>> g[maxn];
int d_best[maxn];
int d_worst[maxn];
int n;

int best_w()  //dijstras
{
   
    queue <int> q;
    q.push(0);
    d_best[0]=0;
    while (!q.empty())
    {
        
        int u=q.front();
        q.pop();
        for (int i = 0; i < g[u].size(); i++)
        {
            pair<int,int> v=g[u][i];
            if(d_best[v.second] > v.first)
            {
                d_best[v.second]=v.first;
                q.push(v.second);
            }
        }
    }
    int cnt=0;
    for(int i=1;i<=n;i++) cnt+=d_best[i];

    return cnt;
}

int worst_w() //dijstras
{
    queue<int> q;
    q.push(0);
    d_best[0] = 0;
    while (!q.empty())
    {

        int u = q.front();
        q.pop();
        for (int i = 0; i < g[u].size(); i++)
        {
            pair<int, int> v = g[u][i];
            if (d_best[v.second] < v.first)
            {
                d_best[v.second] = v.first;
                q.push(v.second);
            }
        }
    }
    int cnt = 0;
    for (int i = 1; i <= n; i++)
        cnt += d_best[i];

    return cnt;
}
void clean()
{
    for (int i = 0; i <=n; i++)
    {
        d_best[i]=inf;
        d_worst[i]=-1;
    }
    memset(g,0,sizeof g);
    
}
int main(){
   // fin,fout;
    int t;
    int cs=0;
    cin>>t;
    while (t--)
    {
        
        cin>>n;
        clean();
        int u,v,w;
        cin >> u >> v >> w;
        while (u or w or v)
        {
            g[u].push_back(make_pair(w,v));
            g[v].push_back(make_pair(w,u));
            cin >> u >> v >> w;
        }
        int p=best_w()+worst_w();
        int q=2;

        if(p%2==0)
        {
            printf("Case %d: %d\n",++cs,p/q);
        }
        else
        {
            printf("Case %d: %d/%d\n", ++cs, p , q);
        }
        
        
        
    }
    
    return 0;
}