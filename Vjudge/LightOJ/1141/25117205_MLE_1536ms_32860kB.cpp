#include <bits/stdc++.h>
#define ll long long
#define fin freopen("in.txt", "r", stdin)
#define fout freopen("out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;
vector <int> cur_prime;
int dis[1001];
void prime(int n)
{
    int tmp_n=n;
    int sq=sqrt(n);
    for (int i = 2; i <= sq; i++)
    {
        int tmp=n;
        while(n%i==0)
        {
            n/=i;
            
        }
        if(tmp!=n)
        cur_prime.push_back(i);
    }
    if(n>1 &&  tmp_n!=n) cur_prime.push_back(n);
    
}

int main(){
    int t;
    cin>>t;
    int tc=0;
    while (t--)
    {
        
        int start,stop;
        cin>>start>>stop;
        if(start==stop){
            printf("Case %d: %d\n", ++tc, 0);
            continue;
        }
            
        queue <int> q;
        q.push(start);
        
        while (!q.empty())
        {
            
            int tmp=q.front();
            q.pop();
            cur_prime.clear();
            prime(tmp);
            for (int i = 0; i < cur_prime.size(); i++)
            {
                
                int new_val=tmp+cur_prime[i];
            
                if(new_val<=stop)
                {
                    q.push(new_val);
                    dis[new_val]=dis[tmp]+1;
                    if(new_val==stop)
                    {
                        while(!q.empty()) q.pop();
                        break;
                    }
                }
            }
            
        }
        if(dis[stop])
            printf("Case %d: %d\n", ++tc, dis[stop]); 
        else 
            printf("Case %d: %d\n", ++tc, -1);
        memset(dis, 0, sizeof dis);
    }
    
    return 0;
}