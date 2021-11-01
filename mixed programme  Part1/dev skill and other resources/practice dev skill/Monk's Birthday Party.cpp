#include <bits/stdc++.h>
#define ll long long
#define fin freopen("in.txt", "r", stdin)
#define fout freopen("out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;


int main(){
    
    int t;
    cin>>t;
    
    while (t--)
    {
        set<string> s;
       int n;
       cin>>n;
       for (int i = 0; i < n; i++)
       {
           string tmp;
           cin>>tmp;
           s.insert(tmp);
       }
       for (auto i = s.begin(); i !=s.end(); i++)
       {
           cout<<*i<<endl;
       }
       
    }
   
    
    return 0;
}