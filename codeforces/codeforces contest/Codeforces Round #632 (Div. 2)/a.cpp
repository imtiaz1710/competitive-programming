#include <bits/stdc++.h>
#define ll long long
#define us unsigned short int
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;


int main(){
  //  fin;
    int t;
    cin>>t;
    while (t--)
    {
        int r,c;
        cin>>r>>c;
        for (int i = 1; i <= r; i++)
        {
            for (int j = 1; j <= c; j++)
            {
                if(i!=r and j==c)
                    cout<<"W";
                else
                    cout<<"B";
            }
            cout<<endl;
        }
        
    }
    
    return 0;
}