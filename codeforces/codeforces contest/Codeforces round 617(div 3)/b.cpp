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
        int s;
        cin>>s;
       int  cnt=0;
       while (s>=10)
       {
           int tmp=s/10;
           
           cnt+=10*tmp;
           s=(s%10)+tmp;
       }
       cnt+=s;
       cout<<cnt<<endl;
       
    }
    
    return 0;
}