#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> pr;

int main(){
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    struct order
    {
        bool operator()(pr const& a, pr const& b) const
        {
            return (a.first > b.first) || (a.first == b.first && a.second < b.second);
        }
    };
    int t;
    scanf("%d",&t);
    while (t--)
    {
        priority_queue <pr,vector <pr>,order > p;
        int n;
        scanf("%d",&n);
        for (int i = 0; i < n; i++)
        {
            int x,y;
            scanf("%d%d",&x,&y);
            p.push(make_pair(x,y));

        }
        
        while (!p.empty())
        {
            printf("%d %d\n",p.top().first,p.top().second);
            p.pop();
        }
    }
    
    
    
    
    return 0;
}