#include <bits/stdc++.h>
#define ll long long
#define fin freopen("in.txt", "r", stdin)
#define fout freopen("out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
#define maxn 107
using namespace std;
vector <int> edge[maxn];


int main(){
    fin,fout;
    int distance[maxn];
    memset(distance,-1,sizeof distance);
    int n,e;
    cin>>n>>e;
    for(int i=0;i<e;i++)
    {
        int x,y;
        cin>>x>>y;
        edge[x].push_back(y);
        edge[y].push_back(x);
    }
    queue <int> q;
    int root;
    cin>>root;
    q.push(root);
    distance[root]=0;
    while(!q.empty())
    {
        int tmp=q.front();
        q.pop();
        for(int i=0;i<edge[tmp].size();i++)
        {
            if(distance[edge[tmp][i]]==-1)
            {
                distance[edge[tmp][i]]=distance[tmp]+1;
                //cout<<distance[edge[tmp][i]]<<" "<<distance[tmp]<<endl;
                q.push(edge[tmp][i]);
            }
		      
        }
    }
    for (int i = 1; i <= n ; i++)
    {
        if(distance[i]!=-1)
            cout<<i<<" "<<distance[i]<<endl;
    }
    return 0;
}


