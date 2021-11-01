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
        if((n/2)%2==1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout << "YES" << endl;
            int even=2;
            int sum=0;
            for(int i=1;i<=n/2;i++)
            {
                sum+=even;
                cout<<even<<" ";
                even+=2;
            }
            int odd=1;
            
            for(int i=n/2+1;i<n;i++)
            {
                
                sum-=odd;
                cout<<odd<<" ";
                odd+=2;
                
            }
            
            cout<<sum<<endl;
            

        }
        
    }
    
    return 0;
}