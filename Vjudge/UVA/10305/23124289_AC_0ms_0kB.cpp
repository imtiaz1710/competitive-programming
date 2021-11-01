#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> v;
vector <bool> mark;
vector<int> topsort;
void dfs(int x)
{
    if(mark[x]) return;
    mark[x]=true;
    for (int i = 0; i < v[x].size(); i++)
    {
        dfs(v[x][i]);
    }
    topsort.push_back(x);
    
}
int main(){
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    int m,n;
    cin>>n>>m;
    while (!(m==0 && n==0))
    {
        v.clear();
        mark.clear();
        topsort.clear();
        v.resize(n+1);
        mark.assign(n+1,false);
        for (int  i = 0; i < m; i++)
        {
            int x,y;
            cin>>x>>y;
            v[x].push_back(y);
        }
        for (int i = 1; i <= n; i++)
        {
            if(!mark[i])
            dfs(i);
        }
        reverse(topsort.begin(),topsort.end());
        for (int i=0;i<topsort.size(); i++)
        {
            cout<<topsort[i]<<" ";
        }
        cout<<endl;
        
        
        cin>>n>>m;
    }
    
    return 0;
}