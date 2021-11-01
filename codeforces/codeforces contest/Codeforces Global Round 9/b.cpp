#include <bits/stdc++.h>
#define ll long long
#define us unsigned short int
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;
ll dr[4]={-1,1,0,0};
ll dc[4]={0,0,1,-1};

int main(){
    fin;
    ll t;
    cin>>t;
    while (t--)
    {
        ll r,c;
        cin>>r>>c;
        ll a[r][c];
        bool brk=0;
        for (ll i = 0; i < r; i++)
        {
            for (ll j = 0; j < c; j++)
            {
                cin>>a[i][j];
                
            } 
        }
        for (ll i = 0; i < r; i++)
        {
            for (ll j = 0; j < c; j++)
            {
                ll cnt=0;
                for (ll k = 0; k < 4; k++)
                {
                    if(i+dr[k]<r and i+dr[k]>=0 and j+dc[k]<c and j+dc[k]>=0)
                        cnt++;
                }
                if(a[i][j]>cnt){
                    brk = 1;
                    break;
                } 
                a[i][j]=cnt;
            }
            if(brk) break;
        }
        if(brk) cout<<"NO"<<endl;
        else {
            cout<<"YES"<<endl;
            for (ll i = 0; i < r; i++)
            {
                for (ll j = 0; j < c; j++)
                {
                    cout<<a[i][j]<<" ";
                }
                cout<<endl;
            }
            
        }
        
    }

    return 0;
}