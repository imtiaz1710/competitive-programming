#include <bits/stdc++.h>
#define ll long long
#define us unsigned short int
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;


int main(){
    int n,s;
    cin>>n>>s;
    if(n*2>s)
    {
        cout<<"no"<<endl;
    }
    else
    {
        cout<<"yes"<<endl;
       
        for (int i = 0; i < n-1; i++)
        {
            cout<<2<<" ";
        }
        cout<<s-(n-1)*2<<endl;
        cout<<1<<endl;
    }
    
    return 0;
}