#include <bits/stdc++.h>
#define ll long long
#define fin freopen("in.txt", "r", stdin)
#define fout freopen("out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;


int main(){
    //fin,fout;
    int t;
    cin>>t;
    while (t--)
    {
        priority_queue <ll> pq;
        int n,k;
        cin>>n>>k;
        for (int i = 0; i < n; i++)
        {
            ll tmp;
            cin>>tmp;
            pq.push(tmp);
        }
        ll cnt=0;
        for (int i = 0; i < k; i++)
        {
            ll tmp=pq.top();
            cnt+=tmp;
            pq.pop();
            pq.push(tmp/2);
        }
        cout<<cnt<<endl;
        
    }
    
    return 0;
}