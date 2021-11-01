#include <bits/stdc++.h>
#define ll long long
#define us unsigned short int
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;


int main(){
    fin;
    ll t;
    cin>>t;
    while (t--)
    {
        ll n;
        cin>>n;
        string s;
        cin>>s;
        for (int i = 0; i < n-1; i++)
        {
            if(s[i]=='1' and s[i+1]=='0')
            {
                int j=i-1;
                while (s[j]=='1' and j>=0)
                {
                    s[j]='.';
                    j--;
                }
                j=i+2;
                while (s[j]=='0' and j<n)
                {
                    s[j]='.';
                    j++;
                }
               
            }
        }
        int fst=0;
        string res="";
        for (int i = 0; i < n-1; i++)
        {
            
            if(s[i]=='1' and s[i+1]=='0' and fst==0)
            {
                fst=1;
                s[i]='0';
                s[i+1]='.';
            }
            else if (s[i] == '1' and s[i + 1] == '0' and fst)
            {
                s[i]='.';
                s[i+1]='.';
            }
        }
        for (int i = 0; i < n; i++)
        {
            if(s[i]!='.') cout<<s[i];
        }
        
        
        cout<<endl;
    }
    
    return 0;
}