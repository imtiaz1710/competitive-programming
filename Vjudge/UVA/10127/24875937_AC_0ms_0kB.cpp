#include <bits/stdc++.h>
#define ll long long
#define fin freopen("in.txt", "r", stdin)
#define fout freopen("out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;
int how_many_one(int n)
{
    int cnt=1;
    int res=1%n;
    while(res)
    {
        res=((res*(10%n))+1)%n;
        cnt++;
    }
    return cnt;
}
int main(){
    int n;
    while (cin>>n)
    {
        if(n==0 || n==1)
        {
            cout<<1<<endl;
            continue;
        }
        cout<<how_many_one(n)<<endl;
    }
    return 0;
}