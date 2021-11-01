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
        vector<int> a(n);
        vector<int> b(n);
        vector <int> c(n);
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            c[i]=a[i];
        }
        int mark[2]={0,0};
        for (int i = 0; i < n; i++)
        {
            cin>>b[i];
            mark[b[i]]=1;
        }
        
        sort(c.begin(),c.end());
        if (c == a or (mark[0] and mark[1]) or n==1)
        {
            cout<<"Yes"<<endl;
        }
        else 
        {
            cout<<"No"<<endl;
        }
    }
    
    return 0;
}