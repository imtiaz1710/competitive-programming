#include <bits/stdc++.h>
using namespace std;
#define  max 100
#define GRAY 1
#define BLACK 2
#define pushed 3
void bfs(vector <vector<int>> &v,int is_visited[],int x)
{
    queue<int> q;

    q.push(x);
    
        while (!q.empty())
        {
            int p=q.front();
            is_visited[p]=BLACK;
            cout<<p<<endl;
            for (int i = 0; i < v[p].size(); i++)
            {
                if(is_visited[v[p][i]]==GRAY && is_visited[v[p][i]]!=pushed)
                {
                    q.push(v[p][i]);
                    is_visited[v[p][i]]=pushed;

                }
                
            }
            q.pop();
            
        }
  

}
int main(){
    vector <vector<int>> v(100);
    int is_visited[max]={0};
    int node;
    int edge;
    cin>>node>>edge;
    int x,y;
    
    for (int i = 0; i < edge; i++)
    {
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
        is_visited[x]=GRAY;
        is_visited[y]=GRAY;
    }
    for (int i = 0; i < max; i++)
    {
        if(is_visited[i]==GRAY)
        bfs(v,is_visited,i);
    }
    
    
   
    return 0;
}
/*input:
8 8
1 2
1 3
2 3
2 5
5 7
3 6
6 8 
6 9
*/ 