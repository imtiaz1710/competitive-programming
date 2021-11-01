#include <bits/stdc++.h>
#define ll long long
#define fin freopen("in.txt", "r", stdin)
#define fout freopen("out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;


int main(){
    //fin,fout;
     int a,b;
    while (cin>>a>>b)
    {
        int x=a,y=b;
        if(a>b)
        swap(x,y);
        int mx=1;
        for (int i = x; i <=y ; i++)
        {
            int ans=1;
            int tmp=i;
            while (tmp!=1)
            {
                if(tmp%2==1)
                tmp=tmp*3+1;
                else
                {
                    tmp/=2;
                }
                ans++;
            }
            
            if(ans>mx) mx=ans;
        }
        cout<<a<<" "<<b<<" "<<mx<<endl;
     }
        

    
    
    return 0;
}