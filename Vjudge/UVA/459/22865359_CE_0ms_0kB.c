#include <bits/stdc++.h>
#define gray 1
#define black 2
using namespace std;
void dfs(vector<vector<int>> &v,int x,int is_visited[])
{
     is_visited[x]=black;
    
    for (int i = 0; i < v[x].size(); i++)
    {
        if(is_visited[v[x][i]]==gray)
        dfs(v,v[x][i],is_visited);
       
        
    }
    
}

int main(){
    int t;
    scanf("%d ",&t);
    char c;
    
    while (t--)
    {
       scanf("%c",&c);
       int is_visited[(int)c+1]={0};
       //for(int i=0;i<=c;i++) cout<<is_visited[i]<<endl;
       vector <vector<int>> v((int)c+1);
       string s;
       getline(cin,s);
      do
      {
          getline(cin,s);
          if(!s.empty())
          {
              v[(int)s[0]].push_back((int)s[1]);
              v[(int)s[1]].push_back((int)s[0]);
              is_visited[(int)s[0]]=gray;
              is_visited[(int)s[1]]=gray;
          }
          
      } while (!s.empty());
            //dfs(v,(int)c,is_visited);
          int ans=0;
        //   for (int i = 0; i <=c; i++)
        //   {
        //       cout<<is_visited[i]<<endl;
        //   }
          
          for (int i = 1; i <=c; i++)
          {
              
              if(is_visited[i]==gray)
              {
                  dfs(v,i,is_visited);
                  ans++;
              } 
          }
          cout<<ans<<endl;
    }
    
    return 0;
}