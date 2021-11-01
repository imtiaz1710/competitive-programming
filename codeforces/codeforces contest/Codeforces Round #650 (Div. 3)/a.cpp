#include <bits/stdc++.h>
#define ll long long
#define us unsigned short int
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;


int main(){
    int t;
    cin>>t;
    while (t--)
    {
        string s;
        cin>>s;
        for (int i = 0; i < s.size(); i++)
        {
            if(i%2==1 and i!=s.size()-1) continue;
            cout<<s[i];
        }
        cout<<endl;
        
    }
    
    return 0;
}