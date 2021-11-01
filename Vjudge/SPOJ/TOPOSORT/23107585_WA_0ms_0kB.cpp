#include <bits/stdc++.h>
using namespace std;
#define WHITE 0
#define GRAY 1
#define BLACK 2
vector <vector<int>> v;
vector <int> marker;
stack <int> topsort;
bool f=false;
void dfs(int x)
{
    if(marker[x]==GRAY) 
    {
        f=true;
        return ;
    }
    if(marker[x]==BLACK) return;
    marker[x]=GRAY;
    for (int i = 0; i < v[x].size(); i++)
    {
        dfs(v[x][i]);
    }
    topsort.push(x);
    marker[x]=BLACK;
    
}

int main(){
    int n,m;
    cin>>n>>m;
    v.resize(n+1);
    marker.assign(n+1,WHITE);
    for (int i = 0; i < m; i++)
    {
        int x,y;
        cin>>x>>y;
        v[x].push_back(y);
    }
    for (int i = n; i >=1; i--)
    {
        if(marker[i]==WHITE)
        {
            dfs(i);
        }
    }
    if(f) cout<<"Sandro fails."<<endl;
    else
    {
        while (!topsort.empty())
        {
            cout<<topsort.top()<<" ";
            topsort.pop();
        }
        cout<<endl;
        
    }
    
    
    return 0;
}