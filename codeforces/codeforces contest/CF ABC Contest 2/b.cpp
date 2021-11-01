#include <bits/stdc++.h>
#define ll long long
#define us unsigned short int
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;
string s;
ll check(string tmp)
{
    ll sz1=s.size();
    ll sz2=tmp.size();
    ll cnt=0;
    cout<<sz1-sz2<<endl;
    for (ll i = 0; i <=sz1-sz2 ; i++)
    {
       // cout<<s.substr(i,sz2)<<endl;
        if(tmp==s.substr(i,sz2)) cnt++;
    }
    return cnt;
}
int main(){
    cin>>s;
    ll ans=0;
    for (auto i : {"Danil", "Olya", "Slava", "Ann" , "Nikita"})
    {
        ans+=check(i);
    }
    if(ans==1){
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    
    return 0;
}