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
        vector<int> res;
        int n;
        cin>>n;
        if(n==0||n==1)
        {
            cout<<n<<endl;
            continue;
        }
        for(int i=9;i>=2;i--)
        {
            while (n%i==0)
            {
                res.push_back(i);
                n/=i;
            }
            if(n==1) break;
        }
        if(n>1) 
        cout<<-1<<endl;
        else 
        {
            sort(res.begin(),res.end());
            for(int i=0;i<res.size();i++)
            cout<<res[i];
            cout<<endl;

        }
    }
    return 0;
}