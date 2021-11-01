//right answer bt higher time complixity! 


// #include <bits/stdc++.h>
// #define ll long long
// #define us unsigned short int
// #define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
// #define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
// #define dbg(x) cerr << #x << ": " << x << endl
// #define fastio ios::sync_with_stdio (false); cin.tie (0);
// #define maxn 107
// using namespace std;

// vector <pair < int, pair <int,int> > > g;
// int parent[maxn];
// int n;
// bool visited[maxn];
// vector <int> v[maxn];

// int findparent(int a)
// {
//     if(parent[a]==a) return a;

//     return parent[a]=findparent(parent[a]);
// }

// void dfs(int root)
// {
//     visited[root]=1;
//     for (int i = 0; i < v[root].size(); i++)
//     {
//         if(!visited[v[root][i]])
//         {
//             dfs(v[root][i]);
//         }
//     }
    
// }
// void clean()
// {
//     g.clear();
//     memset(v,0,sizeof v);
//     for (int i = 0; i < maxn; i++)
//     {
//         parent[i]=i;
//     }
//     memset(visited,0,sizeof visited);
    
// }
// int main(){
//     //fin;
//     int t;
//     cin>>t;
//     int tc=0;
//     while (t--)
//     {
        
//         cin>>n;
//         clean();
//         int total=0;
//         for (int i = 1; i <= n; i++)
//         {
//             for(int j=1;j<= n;j++)
//             {
//                 int w;
//                 cin>>w;
//                 if(w) {
//                     total+=w;
//                     g.push_back(make_pair(w,make_pair(i,j)));
//                     v[i].push_back(j);
//                     v[j].push_back(i);
//                 }
//             }
//         }
//         dfs(1);
//         bool stop=0;
//         for(int i=1;i<=n;i++)
//         {
//             if(!visited[i])
//             {
//                 printf("Case %d: -1\n",++tc);
//                 stop=1;
//                 break;
//             }
//         }
//         if(stop) continue;
//         sort(g.begin(),g.end());
//         int cost=0;
//         for (int i = 0; i < g.size(); i++)
//         {
//             int u=g[i].second.first;
//             int v=g[i].second.second;
//             int pu=findparent(u);
//             int pv=findparent(v);
//             if(pu!=pv)
//             {
//                 cost+=g[i].first;
//                 parent[pu]=pv;
//             }
//         }
//         printf("Case %d: %d\n",++tc,total-cost);
//         }
    
//     return 0;
// }


//more optimal solution
// minimum spanning tree

#include <bits/stdc++.h>
#define ll long long
#define us unsigned short int
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt", "w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define maxn 107
using namespace std;

vector<pair<int, pair<int, int>>> g;
int parent[maxn];
int n;

int findparent(int a)
{
    if (parent[a] == a)
        return a;

    return parent[a] = findparent(parent[a]);
}


void clean()
{
    g.clear();
    
    for (int i = 0; i < maxn; i++)
    {
        parent[i] = i;
    }
    
}
int main()
{
    //fin;
    int t;
    cin >> t;
    int tc = 0;
    while (t--)
    {

        cin >> n;
        clean();
        int total = 0;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                int w;
                cin >> w;
                if (w)
                {
                    total += w;
                    g.push_back(make_pair(w, make_pair(i, j)));
                   
                }
            }
        }
       
        sort(g.begin(), g.end());
        int cost = 0;
        int taken_edg=0;
        for (int i = 0; i < g.size(); i++)
        {
            int u = g[i].second.first;
            int v = g[i].second.second;
            int pu = findparent(u);
            int pv = findparent(v);
            if (pu != pv)
            {
                taken_edg++;
                cost += g[i].first;
                parent[pu] = pv;
            }
        }
        if(taken_edg==n-1)
            printf("Case %d: %d\n", ++tc, total - cost);
        else
            printf("Case %d: %d\n", ++tc, -1);
    }

    return 0;
}