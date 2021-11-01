#include <bits/stdc++.h>
#define ll long long
#define us unsigned short int
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;
int a[31];
void build()
{
    int pow=2;
    int sum=2;
    for (int i = 1; i < 31; i++)
    {
        a[i]=sum;
        sum*=pow;
        //cout<<a[i]<<endl;
    }
    
}

int main(){
    build();
    int t;
    int n;
    cin>>t;
    while (t--)
    {
        cin>>n;
        int half=n/2;
        int sum=a[n];
        for (int i = 1; i <=n-1; i++)
        {
           if(i<half)
           {
               sum+=a[i];
           }
           else
           {
               sum-=a[i];
           }
        }
        cout<<sum<<endl;
    }
    
    return 0;
}