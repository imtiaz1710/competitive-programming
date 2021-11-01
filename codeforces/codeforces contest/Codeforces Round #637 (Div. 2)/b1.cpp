#include <bits/stdc++.h>
#define ll long long
#define us unsigned short int
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;


int main(){
   // fin;
    int t;
    cin>>t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        int a[n+1];
        int freq[n+1];
        for (int i = 1; i <= n; i++)
        {
            cin>>a[i];
        }
        freq[1]=freq[0]=0;
       
        for (int i = 2; i < n; i++)
        {
                freq[i]=freq[i-1];
                if(a[i-1]<a[i] and a[i+1]<a[i])
                {
                    freq[i]++;
                }
        }
        freq[n]=freq[n-1];
        int t = freq[k];
        
        if(freq[k-1]!=freq[k])
            t--;

        int l=1;
        int j=1;
        
        for (int i = k+1; i <=n; i++)
        {
            int cnt = freq[i] - freq[j++];
            if(freq[j]!=freq[j-1])
                cnt--;
            if(freq[i]!=freq[i-1]) 
                cnt--;
               

            if(t<cnt)
            {
                l=j;
                t=cnt;
            }
        }
              
        cout<<t+1<<" "<<l<<endl;
  
    }
    
    return 0;
}