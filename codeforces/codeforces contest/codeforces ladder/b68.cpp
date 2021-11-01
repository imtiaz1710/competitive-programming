#include <bits/stdc++.h>
#define ll long long
#define us unsigned short int
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;
int convt(int x)
{
    if(x==0) return 0;
    else if(x==1) return 3;
    else return 6;
}

int main(){
    int r,c;
    r=c=9;
    char a[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin>>a[i][j];
        }
    }
    int x,y;
    cin>>x>>y;
    x--,y--;
    x%=3;
    y%=3;
    x=convt(x);
    y=convt(y);
    bool f=0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if(a[x+i][y+j]=='.')
            {
                a[x+i][y+j]='!';
                f=1;
            }
        }
    }
    for (int i = 0; i < r; i++)
    {
        if (i != 0 and i % 3 == 0)
            cout << endl;
        for (int j = 0; j < c; j++)
        {
            if(j%3==0 and j!=0)
            {
                cout<<" ";
            }
            if(!f and a[i][j]=='.')
            {
                cout<<'!';
            }
            else
            {
                cout<<a[i][j];
            }
            
        }
        
        cout<<endl;
        
    }
    cout<<endl;
    
    
    return 0;
}