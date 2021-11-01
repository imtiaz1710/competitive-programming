#include <bits/stdc++.h>
#define ll long long
#define fin freopen("in.txt", "r", stdin)
#define fout freopen("out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;


int main(){
    int n,k,m;
    cin>>n>>k>>m;
    vector<int> value[m];
    int a[n];
    for(int i=0;i<n;i++) 
    {
        cin>>a[i];
        value[a[i]%m].push_back(a[i]);
    }
    int mx=0;
    int indx=-1;
    for(int i=0;i<m;i++)
        {
            if(value[i].size()>mx) 
            {
                mx=value[i].size();
                indx=i;
            }
        }
    if(mx>=k)
    {
        cout<<"Yes"<<endl;
        for(int i=0;i<k;i++)
        {
            cout<<value[indx][i]<<" ";
        }
        cout<<endl;
    }
    else cout<<"No"<<endl;
    

    return 0;
}