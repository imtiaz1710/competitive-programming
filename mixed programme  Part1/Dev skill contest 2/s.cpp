#include <bits/stdc++.h>
#define ll long long
#define fin freopen("in.txt", "r", stdin)
#define fout freopen("out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;


int main(){
    int n;
    vector <pair<int,int>> v;
    cin>>n;
    ll a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i <n-1 ; i++)
    {
        int min=i;
        for (int j = i+1; j <n ; j++)
        {
            if(a[j]<a[min])
            min=j;
        }
        swap(a[i],a[min]);
        v.push_back(make_pair(i,min));
        
    }
    cout<<v.size()<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    
    return 0;
}