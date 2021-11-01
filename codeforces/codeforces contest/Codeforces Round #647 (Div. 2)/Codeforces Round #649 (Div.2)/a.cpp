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
        int n,x;
        cin>>n>>x;
        int a[n];
        int sum=0;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        int fnt,end;
        fnt=end=-1;
        if(sum%x==0)
        {
            for (int i = 0; i < n; i++)
            {
                if(a[i]%x!=0 and a[i]!=0)
                {
                    fnt=i+1;
                    break;
                }
            }
            for (int i = n-1; i >=0 ; i--)
            {
                if (a[i] % x != 0 and a[i] != 0)
                {
                    end = n-i;
                    break;
                }
            }
            int ans=min(fnt,end);
            if(ans!=-1)
                cout<<n-ans<<endl;
            else 
                cout<<ans<<endl;
            
        }
        else
        {
            cout<<n<<endl;
        }
        
        
    }
    
    return 0;
}