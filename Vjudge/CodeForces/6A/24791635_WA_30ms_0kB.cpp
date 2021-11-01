#include <bits/stdc++.h>
#define ll long long
#define fin freopen("in.txt", "r", stdin)
#define fout freopen("out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;


int main(){
    int a[4];
    for (int i = 0; i < 4; i++)
    {
        cin>>a[i];
    }
    sort(a,a+4);
    reverse(a,a+4);
    if(a[0]<a[2]+a[3])
    {
        cout<<"TRIANGLE"<<endl;
        return 0;
    }
    if(a[1]<a[2]+a[3])
    {
        cout<<"TRIANGLE"<<endl;
        return 0;
    }
    if(a[0]==a[2]+a[3])
    {
        cout<<"SEGMENT"<<endl;
        return 0;
    }
    if(a[1]==a[2]+a[3])
    {
        cout<<"SEGMENT"<<endl;
        return 0;
    }
    cout<<"IMPOSSIBLE"<<endl;
    
    return 0;
}