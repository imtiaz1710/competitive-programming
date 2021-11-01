#include <bits/stdc++.h>
#define ll long long
#define us unsigned short int
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;


int main(){
    int n,q;
    cin>>n>>q;
    vector <int> a(n+1,0);
   
    for (int i = 0; i < q; i++)
    {
        int t,k,d;
        cin>>t>>k>>d;
        int k_cnt=0;
        vector <int> indx;
        for (int i = 1; i <= n; i++)
        {
            if(a[i]<t)
            {
                indx.push_back(i);
                k_cnt++;
            }
        }
        int sum=0;
        if(k_cnt>=k)
        {
            int j=0;
            while (k--)
            {
                sum+=indx[j];
                a[indx[j++]]=t+d-1;
            }
        }
        sum==0?sum=-1:sum;
        cout<<sum<<endl;
        
    }
    
    return 0;
}