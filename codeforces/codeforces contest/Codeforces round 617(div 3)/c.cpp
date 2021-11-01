#include <bits/stdc++.h>
#define ll long long
#define fin freopen("in.txt", "r", stdin)
#define fout freopen("out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;


int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        string s;
        cin>>n>>s;
        map<pair<int,int>,int> mp;
        pair<int,int> cur_pos={0,0};
        mp[cur_pos]=0;
        int dif=10000000;
        int l=0,r=0;
        for (int i = 0; i < s.size(); i++)
        {
            if(s[i]=='L') cur_pos.first--;
            if(s[i]=='R') cur_pos.first++;
            if(s[i]=='U') cur_pos.second++;
            if(s[i]=='D') cur_pos.second--;
            if(mp.count(cur_pos)) 
            {
                if((i+1)-mp[cur_pos]<dif)
                {
                    dif=(i+1)-mp[cur_pos];
                    l=mp[cur_pos]+1;
                    r=i+1;
                }
                
            }
            mp[cur_pos]=i+1;
        }
        if(l==0 && r==0)
        {
            cout<<-1<<endl;
        }
        else cout<<l<<" "<<r<<endl;
    }
    
    return 0;
}