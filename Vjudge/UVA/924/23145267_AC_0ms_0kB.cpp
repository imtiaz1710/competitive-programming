

#include <bits/stdc++.h>
using namespace std;
vector < vector<int> > v;
vector<int> mark;
queue <int> qu;
bool f=false;
void bfs(int x)
{
    int tmp=x;
    qu.push(x);
    while (!qu.empty()) 
    {
        x=qu.front();
        qu.pop();
        
        for (int i = 0; i < v[x].size(); i++)
        {
            if(v[x][i]==tmp && f) continue;
            if(mark[v[x][i]]==0)
            {
                
                qu.push(v[x][i]);
                mark[v[x][i]]=mark[x]+1;
            }
        }
        f=true;
        
    }
    
}
int main(){
   // freopen("in.txt", "r", stdin);
    //freopen("ou.txt", "w", stdout);
    int e;
    cin>>e;
    v.resize(e);
    for (int i = 0; i < e; i++)
    {
        int n;
        cin>>n;
        while (n--)
        {
            int item;
            cin>>item;
            v[i].push_back(item);
        }
    }
    int q;
    cin>>q;
    for (int i = 0; i < q; i++)
    { 
        f=false;
        int qvalue;
        cin>>qvalue;
        int resultday=0;
        int  resulttotal=0;
        mark.assign(e,0);
        bfs(qvalue);
        int totalday=0;
        //mark[qvalue]=0;
        for (int i = 0; i < e; i++)
        {
            if(mark[i]>totalday) totalday=mark[i];
            //cout<<mark[i]<<endl;
        }
        if(totalday==0) cout<<0<<endl;
        else
        {
            for (int i = 1; i <= totalday; i++)
            {
                int cnt=0;
                for (int j = 0; j < e; j++)
                {
                    if(mark[j]==i) cnt++;
                }
                if(cnt>resulttotal) 
                {
                    resultday=i;
                    resulttotal=cnt;
                }
            }
             cout<<resulttotal<<" "<<resultday<<endl;
        }
       
        
        

    }
    
    
    
    return 0;
}