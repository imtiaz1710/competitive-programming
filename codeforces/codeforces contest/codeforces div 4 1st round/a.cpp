#include <bits/stdc++.h>
#define ll long long
#define us unsigned short int
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;


int main(){
    //fin;
    int t;
    cin>>t;
    while (t--)
    {
        vector <int> res;
        int n;
        cin>>n;
        int pow=1;
        int cnt=0;
        while (n)
        {
            if(n%10!=0) cnt++;
            if ((n % 10) * pow!=0)
                res.push_back((n % 10) * pow);
            n/=10;
            pow*=10;
        }
        cout<<cnt<<endl;
        for (int i = 0; i < res.size(); i++)
        {
            cout<<res[i]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}