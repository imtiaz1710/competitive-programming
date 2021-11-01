#include <bits/stdc++.h>
#define ll long long
#define fin freopen("in.txt", "r", stdin)
#define fout freopen("out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;


int main(){
    int n;
    cin>>n;
    vector <int> v(n);
    vector<int> tmp(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    int f=0;
    int l=0,r=0;
    for (int i = 0; i < n-1; i++)
    {
        if(v[i]>v[i+1])
        {
            if(f==0)
            {
                f=1;
                l=i;
            }
            r=i+1;
        }
        if(f==1 && v[i]<v[i+1])
        break;
    }
    tmp=v;
    reverse(v.begin()+l,v.begin()+r+1);
    sort(tmp.begin(),tmp.end());
    if(tmp==v)
    {
        cout<<"yes"<<endl;
        cout<<l+1<<" "<<r+1<<endl;
    }
    else
    {
        cout<<"no"<<endl;
    }
    
    
    return 0;
}