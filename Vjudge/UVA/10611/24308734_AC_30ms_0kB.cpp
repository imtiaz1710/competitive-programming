#include <bits/stdc++.h>
#define ll long long
#define fin freopen("in.txt", "r", stdin)
#define fout freopen("out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;
vector <int> a;
int bsearch_low(int l,int r,int ele)
{
    int mid;
    int ans;
    while (l<=r)
    {
        mid=(l+r)/2;
        if(a[mid]<ele)
        {
            l=mid+1;
            ans=mid;
        }
        else
        {
            r=mid-1;
        }
        
    }
    return ans;
}

int bsearch_high(int l,int r,int ele)
{
    int mid;
    int ans;
    while (l<=r)
    {
        mid=(l+r)/2;
        if(a[mid]>ele)
        {
            r=mid-1;
            ans=mid;
        }
        else
        {
            l=mid+1;
        }
        
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    a.resize(n);
    
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
   
    int q;
    cin>>q;
    for (int i = 0; i < q; i++)
    {
        int x;
        cin>>x;
        int low=bsearch_low(0,n-1,x);
        int high=bsearch_high(0,n-1,x);
        if(a[low]==x || a[low]>x) cout<<"X"<<" ";
        else
        {
            cout<<a[low]<<" ";
        }
        if(a[high]==x || a[high]<x)
        cout<<"X"<<endl;
        else
        {
            cout<<a[high]<<endl;
        }
    }
    
    return 0;
}