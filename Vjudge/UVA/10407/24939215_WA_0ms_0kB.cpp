#include <bits/stdc++.h>
#define ll long long
#define fin freopen("/home/imtiaz/Desktop/dev skill contest 4/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/dev skill contest 4/out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
#define mx (ll)5e7
using namespace std;
bool mark[mx];
vector <ll> prime;
vector<ll> value;

void seive()
{
    mark[0]=mark[1]=1;
    for(ll i=4;i<mx;i+=2) mark[i]=1;
    for(ll i=3;i*i<= mx;i+=2)
        for(ll j=i*i;j<mx;j+=i+i)
            mark[j]=1;
    for(ll i=0;i<mx;i++)
        if(!mark[i]) prime.push_back(i);
}


ll divisor_finder()
{
    vector <ll> dif;
    sort(value.begin(),value.end());
    for(ll i=0;i<value.size()-1;i++)
    {
        dif.push_back(value[i+1]-value[i]);
    }
    
    
    ll res=1;
    sort(dif.begin(),dif.end());
    ll limit=sqrt(dif[0])+1;
    for(ll i=0;prime[i]<=limit && i<prime.size();i++)
    { 
        
        while(dif[0]%prime[i]==0)
        {
            
            bool is_not_common=0;
            for(ll j=0;j<dif.size();j++)
            {
               
                if(dif[j]%prime[i]!=0)
                {
                    is_not_common=1;
                }
                else dif[j]=dif[j]/prime[i];
            }
            if(!is_not_common) res*=prime[i];
        }
        if(dif[0]==1) break;
    }
    
     
    if(dif[0]>1) 
    {
        ll tmp=dif[0];
        bool is_not_common=0;
        for(ll j=0;j<dif.size();j++)
        {
            
            if(dif[j]%dif[0]!=0)
            {
                is_not_common=1;
            }
            else dif[j]=dif[j]/dif[0];
        }
        if(!is_not_common) res*=tmp;
    }
    return res;
}



int main(){
 
    seive();
    ll start;
    while (cin>>start,start)
    {
       
        value.push_back(start);
        ll val;
        while(cin>>val,val)
        {
            
            value.push_back(val);
        }
        cout<<divisor_finder()<<endl;
        value.clear();
    }
    return 0;
}


