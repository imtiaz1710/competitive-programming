//first and wrong approach

// #include <bits/stdc++.h>
// #define ll long long
// #define us unsigned short int
// #define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
// #define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
// #define dbg(x) cerr << #x << ": " << x << endl
// #define fastio ios::sync_with_stdio (false); cin.tie (0);
// #define maxn 107
// #define inf 1000000000
// using namespace std;
// vector<pair<ll,ll>> g[maxn];
// ll d_best[maxn];
// ll d_worst[maxn];
// ll n;

// ll best_w()  //dijstras
// {
   
//     queue <ll> q;
//     q.push(0);
//     d_best[0]=0;
//     while (!q.empty())
//     {
        
//         ll u=q.front();
//         q.pop();
//         for (ll i = 0; i < g[u].size(); i++)
//         {
//             pair<ll,ll> v=g[u][i];
//             if(d_best[v.second] > v.first)
//             {
//                 d_best[v.second]=v.first;
//                 q.push(v.second);
//             }
//         }
//     }
//     ll cnt=0;
//     for(ll i=1;i<=n;i++) cnt+=d_best[i];

//     return cnt;
// }

// ll worst_w() //dijstras
// {
//     queue<ll> q;
//     q.push(0);
//     d_best[0] = 0;
//     while (!q.empty())
//     {

//         ll u = q.front();
//         q.pop();
//         for (ll i = 0; i < g[u].size(); i++)
//         {
//             pair<ll, ll> v = g[u][i];
//             if (d_best[v.second] < v.first)
//             {
//                 d_best[v.second] = v.first;
//                 q.push(v.second);
//             }
//         }
//     }
//     ll cnt = 0;
//     for (ll i = 1; i <= n; i++)
//         cnt += d_best[i];

//     return cnt;
// }
// void clean()
// {
//     for (ll i = 0; i <=n; i++)
//     {
//         d_best[i]=inf;
//         d_worst[i]=-1;
//     }
//     memset(g,0,sizeof g);
    
// }
// int main(){
//    fin,fout;
//     ll t;
//     ll cs=0;
//     cin>>t;
//     while (t--)
//     {
        
//         cin>>n;
//         clean();
//         ll u,v,w;
//         cin >> u >> v >> w;
//         while (u or w or v)
//         {
//             g[u].push_back(make_pair(w,v));
//             g[v].push_back(make_pair(w,u));
//             cin >> u >> v >> w;
//         }
//         ll p=best_w()+worst_w();
//         ll q=2;

//         if(p%2==0)
//         {
//             printf("Case %lld: %lld\n",++cs,p/q);
//         }
//         else
//         {
//             printf("Case %lld: %lld/%lld\n", ++cs, p , q);
//         }
        
        
        
//     }
    
//     return 0;
// }

//final and right approach 

#include <bits/stdc++.h>
#define ll long long
#define us unsigned short int
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
#define maxn 109
using namespace std;

vector < pair < int,pair<int,int> >  > g;
int parent[maxn];
void clean()
{
    for (int  i = 0; i < maxn; i++)
    {
        parent[i]=i;
    }
    g.clear();
}
int findparent(int a)
{
    if(parent[a]==a) return a;
    return parent[a]=findparent(parent[a]);
}
int main(){
    //fin,fout;
    int t;
    cin>>t;
    int cs=0;
    while (t--)
    {
        clean();
        int n;
        cin>>n;
        int u,v,w;
        while (cin>>u>>v>>w, u or v or w)
        {
            g.push_back(make_pair(w,make_pair(u,v)));
        }

        sort(g.begin(),g.end());               //minimum spanning tree
        int min_cost=0;
        for (int i = 0; i < g.size(); i++) 
        {
            int x=g[i].second.first;
            int y=g[i].second.second;
            int px=findparent(x);
            int py=findparent(y);
            if(px!=py)
            {
                parent[py]=px;
                min_cost+=g[i].first;
            }
        }
       // cout<<min_cost<<endl;

        for (int i = 0; i < maxn; i++) //maximum spanning tree
        {
            parent[i] = i;
        }
        reverse(g.begin(), g.end()); 
        int max_cost = 0;
        for (int i = 0; i < g.size(); i++)
        {
            int x = g[i].second.first;
            int y = g[i].second.second;
            int px = findparent(x);
            int py = findparent(y);
            if (px != py)
            {
                parent[py] = px;
                max_cost += g[i].first;
            }
        }
        //cout << max_cost << endl;
        int total=min_cost+max_cost;
        if(total%2==0)
        {
            printf("Case %d: %d\n",++cs,total/2);
        }
        else
        {
            printf("Case %d: %d/%d\n", ++cs, total,2);
        }
        
    }
    
    return 0;
}