#include <bits/stdc++.h>
using namespace std;
#define gray 1
#define black 2
vector <int> res;
void dfs(vector<vector<int>> &v,int x,vector <int> &marked)
{
    marked[x]=black;
    
    for (int i = 0; i < v[x].size(); i++)
    {
        if(marked[v[x][i]]==gray)
        dfs(v,v[x][i],marked);
    }
    res.push_back(x);
    
}
int main(){
    freopen("in.txt","r",stdin);
    freopen("ou.txt","w",stdout);
    int n,e;
    cin>>n>>e;
    while ((n+e)!=0)
    {
        vector <vector<int>> v(n+1);
        vector <int> marked(n+1,0);
        for (int i = 0; i < e; i++)
        {
            int a,b;
            cin>>a>>b;
            marked[a]=gray;
            marked[b]=gray;
            v[a].push_back(b);
        }
        for (int i = 0; i <= n; i++)
        {
            
            if(marked[i]==gray)
            {
                
                dfs(v,i,marked);
            }
        }
        for (int i = 1; i <=n; i++)
         {
             if(!marked[i]) cout<<i<<" ";
         }
         for (int i=res.size()-1;i>=0;i--)
         {
             cout<<res[i];
             if(i!=0)cout<<" ";
         }
         cout<<endl;
        
        cin>>n>>e;

    }
    
    
    return 0;
}