#include <bits/stdc++.h>
using namespace std;
vector <vector<int>> v;
vector <int> mark;
vector <int> topsort;
bool f;
void dfs(int x)
{
    if(mark[x]==1) return;
    mark[x]=1;
    int tmp=x;
    for (int i = 0; i < v[x].size(); i++)
    {
        dfs(v[x][i]);
    }
    if(!f)
    topsort.push_back(tmp);
    
}
int main(){
    freopen("in.txt","r",stdin);
   freopen("ou.txt","w",stdout);
    int t;
    cin>>t;
    while (t--)
    {
        f=false;
        int node,edge;
        cin>>node>>edge;
        v.clear();
        v.resize(node+1);
        mark.clear();
        mark.assign(node+1,0);
        topsort.clear();
        
        
        for (int i = 0; i <edge; i++)
        {
            int x,y;
            cin>>x>>y;
            v[x].push_back(y);
        }
        for (int i = 1; i <= node; i++)
        {
            if(mark[i]==0)
            dfs(i);
        }
        mark.clear();
        mark.assign(node+1,0);
        reverse(topsort.begin(),topsort.end());
        f=true;
        int cnt=0;
        for (int i = 0; i <topsort.size(); i++)
        {
            
            if(mark[topsort[i]]==0)
            {
              
               //cout<<topsort[i]<<endl;
                cnt++;
                dfs(topsort[i]);
            }
        }
        cout<<cnt<<endl;
        
        
        

    }
    
    return 0;
}