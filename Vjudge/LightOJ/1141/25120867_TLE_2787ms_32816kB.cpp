#include <bits/stdc++.h>
#define ll long long
#define fin freopen("in.txt", "r", stdin)
#define fout freopen("out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
#define us unsigned short int
using namespace std;
vector <us> cur_prime;
us dis[1001];
void prime(us n)
{
    us tmp_n=n;
    us sq=sqrt(n);
    for (us i = 2; i <= sq; i++)
    {
        us tmp=n;
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
    fastio
    us t;
    cin>>t;
    us tc=0;
    while (t--)
    {
        
        us start,stop;
        cin>>start>>stop;
        if(start==stop){
            printf("Case %d: %d\n", ++tc, 0);
            continue;
        }
            
        queue <us> q;
        q.push(start);
        
        while (!q.empty())
        {
            
            us tmp=q.front();
            q.pop();
            cur_prime.clear();
            prime(tmp);
            for (us i = 0; i < cur_prime.size(); i++)
            {
                
                us new_val=tmp+cur_prime[i];
            
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