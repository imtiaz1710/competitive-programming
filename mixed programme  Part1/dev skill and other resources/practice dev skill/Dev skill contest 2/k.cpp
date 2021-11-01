#include <bits/stdc++.h>
#define ll long long
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;


int main(){
    fin,fout;
    vector <ll> vasc;
    vector<ll> vdsc;
    char tmp;
    while (cin>>tmp)
    {
        vasc.push_back((ll)tmp-'0');
    }
    sort(vasc.begin(),vasc.end());
    vdsc=vasc;
    reverse(vdsc.begin(),vdsc.end());
    stringstream s1;
    for (ll i:vasc)
    {
        s1<<i;
    }
    ll num1,num2;
    s1>>num1;
    stringstream s2;
    for(ll i:vdsc)
    {
        s2<<i;
    }
    s2>>num2;
    cout<<num1+num2<<endl;
    return 0;
}