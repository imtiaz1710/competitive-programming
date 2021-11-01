#include <bits/stdc++.h>
#define ll long long
#define fin freopen("in.txt", "r", stdin)
#define fout freopen("out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;
vector <int> scores;
// void bsearch(int l,int r,int key)
// {
//     int mid;
//     int ans;

//     while (l<=r)
//     {
//         mid=(l+r)/2;
//         if(key<scores[mid])
//         {
//             l=mid+1;
//         }
//         else
//         {
//             r=mid-1;
//             ans=mid;
//         }
        
//     }
//     if(scores[ans]==key)
//     cout<<ans+1<<endl;
//     else
//     {
//         cout<<ans+2<<endl;
//     }
    
    
// }
int main(){
    
    int n,m;
    cin>>n;
    
    int tmp;
    int pre=-1;
    for (int i = 0; i < n; i++)
    {
        cin>>tmp;
        if(tmp!=pre)
        scores.push_back(tmp);
        pre=tmp;
    }
    cin>>m;
    vector<int> alice(m);
    for (int i = 0; i < m; i++)
    {
        cin>>alice[i];
    }
    reverse(scores.begin(),scores.end());
    for(int x: alice)
    {
        
        auto it=lower_bound(scores.begin(),scores.end(),x);
        if(*it==x)
         cout<<scores.size()-distance(scores.begin(),it)<<endl;
         else
         {
             cout<<scores.size()-distance(scores.begin(),it)+1<<endl;
         }
         
    }
    return 0;
}