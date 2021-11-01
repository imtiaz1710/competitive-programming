#include <bits/stdc++.h>
#define ll long long
#define fin freopen("in.txt", "r", stdin)
#define fout freopen("out.txt","w", stdout)
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //fin;
   // fout;
    int t;
    cin>>t;
    while (t--)
    {
        set <ll> s;
        int n;
        cin>>n;
        for (int i = 0; i < n; i++)
        {
            ll tmp;
            cin>>tmp;
            s.insert(tmp);
        }
        cout<<s.size()<<endl;
        

    }
    
    return 0;
}