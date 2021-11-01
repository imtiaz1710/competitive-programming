#include <bits/stdc++.h>
#define ll long long
#define us unsigned short int
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;


int main(){
    ll n;
    cin>>n;
    ll ac,wa,tle,re;
    ac=wa=tle=re=0;
    string s;
    for (ll i = 0; i < n; i++)
    {
        cin>>s;
        if(s=="AC") ac++;
        else if(s=="WA") wa++;
        else if(s=="TLE") tle++;
        else re++;
    }
    printf("AC x %lld\n",ac);
    printf("WA x %lld\n",wa);
    printf("TLE x %lld\n",tle);
    printf("RE x %lld\n",re);

        return 0;
}