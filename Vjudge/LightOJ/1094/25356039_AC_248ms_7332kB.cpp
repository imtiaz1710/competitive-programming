#include <bits/stdc++.h>
#define ll long long
#define us unsigned short int
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
#define mp make_pair
#define maxn 30005

using namespace std;
vector <pair<ll,ll>> g[maxn];
vector<ll> used_node;
ll mx;
ll d[maxn];
ll n;

void clean()
{
    for (ll i = 0; i < n; i++)
    {
        g[i].clear();
    }
}

void dijstra(ll root)
{
    for (ll i = 0; i < n; i++)
    {
        d[i]=1000000000;
    }
    priority_queue <pair<ll,ll>> q;
    q.push(mp(0,root));
    d[root]=0;
    while (!q.empty())
    {
        pair<ll,ll> u=q.top();
        q.pop();
        for (ll i = 0; i < g[u.second].size(); i++)
        {
            pair<ll,ll> v=g[u.second][i];
            if(d[u.second]+v.first< d[v.second])  //relaxation
            {
                d[v.second]=d[u.second]+v.first;
                q.push(mp(-d[v.second],v.second));  
            }
        }
    }
}

int main()
{
   //fin,fout;
    ll t;
    scanf("%lld",&t);
    ll tc=0;
    while (t--)
    {

        scanf("%lld",&n);
        ll u,v,w;
    
        for(int i=0;i<n-1;i++)
        {
            scanf("%lld%lld%lld",&u,&v,&w);
           
            g[u].push_back(mp(w,v));
            g[v].push_back(mp(w,u));
        }
     
        dijstra(0); //randomly select a root which is the last value of u

        ll root;
        mx = 0;
        for (int i = 0; i < n; i++)
        {
            if (mx < d[i])
            {
                mx = d[i];
                root = i;
            }
        }

        dijstra(root); //from the first dijstras() call we found the value of root1
        mx = 0;
        for (int i = 0; i < n; i++)
        {
            if (mx < d[i])
            {
                mx = d[i];
            }
        }
        printf("Case %lld: %lld\n",++tc,mx);
        clean();
    }

    return 0;
}

//rezaul vaiyar code
// #include <bits/stdc++.h>

// #define eps 1e-9
// #define pi acos(-1)
// #define pb push_back
// #define mp make_pair
// #define INF 10000000
// #define MOD 1000000007
// #define pause system("pause")
// #define mem(a, b) memset(a, b, sizeof(a))
// #define clock 1.0 * clock() / CLOCKS_PER_SEC
// #define filein freopen("in.txt", "r", stdin)
// #define fileout freopen("out.txt", "w", stdout)
// #define fast                          \
//     std::ios::sync_with_stdio(false); \
//     cin.tie(NULL)

// using namespace std;

// typedef long long ll;
// typedef long double ld;
// typedef pair<int, int> pii;
// typedef pair<ll, ll> pll;
// typedef vector<int> vi;
// typedef vector<ll> vl;

// int Set(int N, int p) { return N |= (1 << p); }
// int Reset(int N, int p) { return N &= ~(1 << p); }
// bool Check(int N, int p) { return N & (1 << p); }

// const int dr[] = {0, -1, 0, 1, -1, -1, 1, 1};
// const int dc[] = {1, 0, -1, 0, 1, -1, -1, 1};

// class data
// {
// public:
//     int city, cost;
//     data() {}
//     data(int _city, int _cost) : city(_city), cost(_cost) {}
// };

// int d[30000 + 1], n;
// vector<data> edgelist[30000 + 1];
// bool visited[30000 + 1];

// inline void clean()
// {
//     for (int i = 0; i < 30000 + 1; i++)
//     {
//         edgelist[i].clear();
//     }
//     mem(visited, false);
// }

// int main()
// {
//     //    filein;
//     int t;
//     scanf("%d", &t);
//     for (int i = 0; i < t; i++)
//     {
//         clean();
//         scanf("%d", &n);
//         for (int j = 0; j < n - 1; j++)
//         {
//             int from, to, cost;
//             scanf("%d %d %d", &from, &to, &cost);
//             edgelist[from].pb(data(to, cost));
//             edgelist[to].pb(data(from, cost));
//         }

//         mem(d, 0);
//         queue<int> q;
//         visited[0] = true;
//         q.push(0);
//         while (q.size())
//         {
//             int u = q.front();
//             q.pop();
//             for (int j = 0; j < edgelist[u].size(); j++)
//             {
//                 data k = edgelist[u][j];
//                 if (!visited[k.city])
//                 {
//                     q.push(k.city);
//                     d[k.city] = d[u] + k.cost;
//                     visited[k.city] = true;
//                 }
//             }
//         }
//         int source, source_cost = 0;
//         for (int j = 1; j < n; j++)
//         {
//             if (d[j] > source_cost)
//             {
//                 source_cost = d[j];
//                 source = j;
//             }
//         }

//         mem(visited, false);
//         mem(d, 0);
//         visited[source] = true;
//         q.push(source);
//         while (q.size())
//         {
//             int u = q.front();
//             q.pop();
//             for (int j = 0; j < edgelist[u].size(); j++)
//             {
//                 data k = edgelist[u][j];
//                 if (!visited[k.city])
//                 {
//                     q.push(k.city);
//                     d[k.city] = d[u] + k.cost;
//                     visited[k.city] = true;
//                 }
//             }
//         }
//         for (int j = 1; j < n; j++)
//         {
//             if (d[j] > source_cost)
//             {
//                 source_cost = d[j];
//                 source = j;
//             }
//         }

//         printf("Case %d: %d\n", i + 1, source_cost);
//     }
//     return 0;
// }