//My first and wrong attempt!

// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;

// int main(){
//     freopen("in.txt", "r", stdin);
//     freopen("out.txt", "w", stdout);
//     ll n;
//     cin>>n;
//     while (n)
//     {
//         ll a[n];
//         for (ll i = 0; i < n; i++)
//         {
//             cin>>a[i];
//         }
//         sort(a,a+n);
//         ll cnt=0;
//         ll ans=0;
//         for (ll i = 0; i < n; i++)
//         {
//             cnt+=a[i];
//             if(i!=0)
//             ans+=cnt;
//         }
//         cout<<ans; 
//          cout<<endl;
//         cin>>n;
        
//     }
    
//     return 0;
// }

//After seeing hints from udebug!

#include <bits/stdc++.h>
#define ll long long
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;


int main(){
    fin,fout;
    int t;
    while (cin>>t,t)
    {
        priority_queue<int,vector<int>,greater<int>> pq;
        for (int i = 0; i < t; i++)
        {
            int tmp;
            cin>>tmp;
            pq.push(tmp);
        }
        int cnt=0;
        while (1)
        {
            int tmp=pq.top();
            pq.pop();
            if(pq.empty())
            {
               // cnt+=tmp;
                break;
            }
            tmp+=pq.top();
            cnt+=tmp;
            pq.pop();
            pq.push(tmp);
        }
        cout<<cnt<<endl;      
    }
    return 0;
}