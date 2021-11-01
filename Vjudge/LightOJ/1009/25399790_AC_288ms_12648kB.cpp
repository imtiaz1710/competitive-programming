#include <bits/stdc++.h>
#define ll long long
#define us unsigned short int
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
#define maxn 50000
using namespace std;
vector <int> g[maxn];
int mark[maxn];
int one,two;
vector<int> node;
int ans;
int cs;
void dfs(int root,int prev)
{   
    if(prev==1){
        mark[root]=2;
        two++;
    }
    else
    {
        mark[root]=1;
        one++;
    }
    

    for(int i=0;i<g[root].size();i++)
    {
        if(!mark[g[root][i]])
        {
            dfs(g[root][i],mark[root]);
        }

    }
}

void clean()
{
    memset(g,0,sizeof g);
    node.clear();
    memset(mark,0,sizeof  mark);
    ans=0;
}
int main(){
   // fin,fout;
    int t;
    scanf("%d",&t);
    for (cs = 1; cs <=t; cs++)
    {
        int n;
        scanf("%d",&n);
        for(int i=0;i<n;i++)
        {
            int u,v;
            scanf("%d%d",&u,&v);
            g[u].push_back(v);
            g[v].push_back(u);
            node.push_back(u);
            node.push_back(v);
        }
        for(int x:node)
        {
            if(!mark[x])
            {
                dfs(x,1);
                ans+=(max(one,two));
                one=two=0;

            }
            
        }
        printf("Case %d: %d\n", cs,ans);
        clean();

    }
    
    return 0;
}