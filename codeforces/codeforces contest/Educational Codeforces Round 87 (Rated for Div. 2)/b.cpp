#include <bits/stdc++.h>
#define ll long long
#define us unsigned short int
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;
ll convert(char a)
{
    if(a=='1') return 1;
    else if(a=='2') return 2;
    else return 3;
}

int main(){
   // fin;
    int t;
    cin>>t;
    while (t--)
    {
        string s;
        cin>>s;
        ll mark[4];
        memset(mark,0,sizeof mark);
        queue <ll> q;
        ll mn=100000000;
        for (ll i = 0; i < s.size(); i++)
        {
            ll val=convert(s[i]);
            q.push(val);
            mark[val]++;

            while (mark[1]  and mark[2] and mark[3] )
            {
                ll size=(ll)q.size();
                mn=min(size, mn);
                ll fnt=q.front();
                mark[fnt]--;
                q.pop();
                
            }
        }

        if (mn == 100000000)
            cout<<0<<endl;
        else
            cout << mn << endl;
        
    }
    
    return 0;
}