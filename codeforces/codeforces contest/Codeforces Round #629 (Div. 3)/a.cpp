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
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        if(b>a)
        {
            cout<<b-a<<endl;
    
        }
        else if(a%b==0)
        {
            cout<<0<<endl;
        }
        else if(a>b)
        {
            int tmp=a/b;
            int tmp1=b*tmp;
            int tmp2=a-tmp1;
            cout<<b-tmp2<<endl;
        }
        
    }
    return 0;
}