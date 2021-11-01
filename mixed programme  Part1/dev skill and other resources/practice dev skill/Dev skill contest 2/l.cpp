#include <bits/stdc++.h>
#define ll long long
#define fin freopen("in.txt", "r", stdin)
#define fout freopen("out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;
bool cmp(int a,int b)
{
    return a>b;
}

int main(){
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    cout<<s<<endl;
    sort(s.begin(),s.end(),cmp);
    cout<<s<<endl;
    return 0;
}