#include <bits/stdc++.h>
#define ll long long
#define us unsigned short int
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;


int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        set<pair<int,int>> s;
        for (int i = 0; i < n; i++)
        {
            int x,y;
            cin>>x>>y;
            s.insert({x,y});
        }
        int r=0,u=0;
        string str="";
        bool f=0;
        while (!s.empty())
        {
            auto tmp=s.begin();
            int x=tmp->first;
            int y=tmp->second;
            s.erase(tmp);
            if(x<r or y<u)
            {
                f=1;
                break;
            }
            while (r!=x)
            {
                str+='R';
                r++;
            }
            while (u!=y)
            {
                str+="U";
                u++;
            }

        }
        if(f)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
            cout<<str<<endl;
        }
        
        
    }
    
    return 0;
}