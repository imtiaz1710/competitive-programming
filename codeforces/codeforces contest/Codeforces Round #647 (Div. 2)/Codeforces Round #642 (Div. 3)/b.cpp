#include <bits/stdc++.h>
#define ll long long
#define us unsigned short int
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;
bool cmp(int a,int b)
{
    return a>b;
}

int main(){
   // fin;
    int t;
    cin>>t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        int a[n];
        int b[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin>>b[i];
        }
        sort(a,a+n);
        sort(b,b+n,cmp);
        int i=0;
        while (k--)
        {
            if(b[i]>a[i])
            swap(a[i],b[i]);
            i++;
        }
        int sum=0;
        for (int i = 0; i < n; i++)
        {
            sum+=a[i];
        }
        cout<<sum<<endl;
    }
    
    return 0;
}