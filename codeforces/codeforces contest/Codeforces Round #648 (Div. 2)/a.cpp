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
        int r,c;
        cin>>r>>c;
        int a[r][c];
        int mr[r];
        int mc[c];
        memset(mr,0,sizeof mr);
        memset(mc,0,sizeof mc);
        int em_r=r,em_c=c;
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                cin>>a[i][j];
                if(a[i][j]==1)
                {
                    if(!mr[i]) 
                    {
                        mr[i]=1;
                        em_r--;
                    }
                    if(!mc[j])
                    {
                        mc[j]=1;
                        em_c--;
                    }
                }
            }
       
        }

        int res = min(em_c, em_r);
        //cout<<res<<endl;
        if(res%2==1)
        {
            cout << "Ashish"<<endl;
        }
        else
        {
            cout << "Vivek"<<endl;
        }
        
    }
    
    return 0;
}