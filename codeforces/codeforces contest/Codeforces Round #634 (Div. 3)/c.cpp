#include <bits/stdc++.h>
#define ll long long
#define us unsigned short int
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;


int main(){
   // fin,fout;
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int> a(n);
        int mx=1;
        int cnt=1;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        for (int i = 0; i < n; i++)
        {

            if(i!=0 and a[i]==a[i-1])
            {
                cnt++;
                if(cnt>mx) mx=cnt;
            }
            else
            {
                cnt=1;
            }
            
        }
       vector <int> :: iterator ip;
        ip=unique(a.begin(), a.begin() + n);
        a.resize(std::distance(a.begin(), ip));
        //cout<<a.size()<<endl;
        int sz=a.size();
        sz--;
        if(sz+1==mx-1 or sz+1<mx-1)
        cout<<sz+1<<endl;
        else if(sz<mx)
        {
            cout<<sz<<endl;
        }
        else
        {
            cout<<mx<<endl;
        }
        
        

        
    }
    
    return 0;
}