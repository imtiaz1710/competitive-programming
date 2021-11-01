#include <bits/stdc++.h>
#define ll long long
#define us unsigned short int
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;
int x=4; //rendom
int y=9;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n=9;
        int a[n][n];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                scanf("%1d",&a[i][j]);
                if(a[i][j]==x) a[i][j]=y;
            }
            
        }
   

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout<<a[i][j];
            }
            cout<<endl;
        }
    }
    
    return 0;
}