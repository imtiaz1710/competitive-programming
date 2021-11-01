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
        int n;
        cin>>n;
        n=2*n;
        int a[n];
        queue<int> q_even;
        queue<int> q_odd;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            if(a[i]%2==1) q_odd.push(i+1);
            else
            {
                q_even.push(i+1);
            }
            
        }
        if(q_even.size()%2==1)
        {
            q_even.pop();
            q_odd.pop();
        }
        else
        {
            if(q_even.size()>=2)
            {
                q_even.pop();
                q_even.pop();
            }
            else if(q_odd.size()>=2)
            {
                q_odd.pop();
                q_odd.pop();
            }
            
        }
        while (!q_even.empty())
        {
            int x=q_even.front();
            q_even.pop();
            int y=q_even.front();
            q_even.pop();
            cout<<x<<" "<<y<<endl;
        }
        while (!q_odd.empty())
        {
            int x = q_odd.front();
            q_odd.pop();
            int y = q_odd.front();
            q_odd.pop();
            cout << x << " " << y << endl;
        }
    }
    
    return 0;
}