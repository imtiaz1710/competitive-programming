#include <bits/stdc++.h>
using namespace std;
#define max 100005
int cnt=0;
void dfs(vector<vector<int>> &v,int x,bool f[])
{
    f[x]=true;
    cnt++;
    for (int i = 0; i < v[x].size(); i++)
    {
        if(f[v[x][i]]==false)
        {

            dfs(v,v[x][i],f);
        }
    }

}

int main(){
    int n,e;
    cin>>n>>e;
    vector<vector<int>> v(max);
    bool f[max]={false};
    int x,y;
    for (int i = 1; i <= e; i++)
    {
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    cin>>x;
    //f[x]=true;
    dfs(v,x,f);


    cout<<n-cnt<<endl;
    return 0;
}
