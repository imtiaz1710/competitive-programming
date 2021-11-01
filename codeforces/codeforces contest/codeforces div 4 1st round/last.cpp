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
        if(n<=3) 
        {
            cout<<-1<<endl;
            continue;
        }
        vector <int> res;
        int i;
        if(n%2==1) i=1;
        else i=2;

        while (i<=n)
        {
            res.push_back(i);
            i+=2;
        }
        res.push_back(n-3);
        res.push_back(n-1);
        int gap=5;
        while (n-gap>0)
        {
            res.push_back(n-gap);
            gap+=2;
        }
        for(int i=0;i<n;i++)
        {
            cout<<res[i]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}