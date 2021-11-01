//Fist attempt and TLE

// #include <bits/stdc++.h>
// #define ll long long
// #define fin freopen("in.txt", "r", stdin)
// #define fout freopen("out.txt","w", stdout)
// #define dbg(x) cerr << #x << ": " << x << endl
// #define fastio ios::sync_with_stdio (false); cin.tie (0);
// using namespace std;


// int main(){
//     int t;
//     cin>>t;
//     while (t--)
//     {
//         vector <ll> v;
//         int n,k;
//         cin>>n>>k;
//         for (int i = 0; i < n; i++)
//         {
//             ll tmp;
//             cin>>tmp;
//             v.push_back(tmp);
//         }
//         for (int i = 0; i < k; i++)
//         {
//             ll tmp;
//             cin>>tmp;
//             auto it=find(v.begin(),v.end(),tmp);
//             if(it!=v.end())
//             cout<<"YES"<<endl;
//             else
//             cout<<"NO"<<endl;
//             v.push_back(tmp);         
//         }
        
        
//     }
    
//     return 0;
// }

#include <bits/stdc++.h>
#define ll long long
#define fin freopen("in.txt", "r", stdin)
#define fout freopen("out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false), cin.tie (0)
using namespace std;


int main(){
    fastio;
    int t;
    cin>>t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        set<ll> s;
        for (int i = 0; i < n; i++)
        {
            ll tmp;
            cin>>tmp;
            s.insert(tmp);
        }
        for (int i = 0; i < k; i++)
        {
            ll tmp;
            cin>>tmp;
            ll first_size=s.size();
            s.insert(tmp);
            ll final_size=s.size();
            if(first_size!=final_size)
            {
                cout<<"NO"<<endl;
            }
            else
            cout<<"YES"<<endl;
         }
        
        
    }
    
    return 0;
}