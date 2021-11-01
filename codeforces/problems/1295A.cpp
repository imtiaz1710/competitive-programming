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
        int n;
        cin>>n;
        if(n%2==1)
        {
            cout<<7;
            n-=3;
        }
        
        while (n)
        {
            cout<<1;
            n-=2;
        }
            
        cout<<endl;
    }
    
    return 0;
}