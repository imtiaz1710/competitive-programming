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
        int a[3];
        int n;
        for (int i = 0; i < 3; i++)
        {
            cin>>a[i];
        }
        cin>>n;
        int mx=*max_element(a,a+3);

        int cnt=0;
        for (int i = 0; i < 3; i++)
        {
            cnt+=(mx-a[i]);
        }
        if(cnt<=n)
        {
            if((n-cnt)%3==0)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
            
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
    }
    
    return 0;
}