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
        string t;
        cin>>t;
        bool f=0;
        for (int i = 1; i < t.size(); i++)
        {
            if(t[i]!=t[i-1])
            {
                f=1;
                break;
            }
        }
        if(f==0)
        {
            cout<<t<<endl;
        }
        else
        {
            char first=t[0];
            string s="";
            int size=t.size();
            size*=2;
            bool zero;
            bool one;

            if(first=='1')
            {
                zero = 1;
                one = 0;
            }
            else
            {
                zero = 0;
                one = 1;
            }
            
            while (size--)
            {
                if(zero)
                {
                    s+='1';
                    zero=0;
                    one=1;
                }
                else if(one)
                {
                    s+='0';
                    zero = 1;
                    one = 0;
                }
            }
            cout<<s<<endl;
        } 
    } 
    return 0;
}