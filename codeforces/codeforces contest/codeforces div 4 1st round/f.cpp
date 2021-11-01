#include <bits/stdc++.h>
#define ll long long
#define us unsigned short int
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;


int main(){
    //fin;
    int t;
    cin>>t;
    while (t--)
    {
        string s="";
        int a,b,c;
        cin>>a>>b>>c;

        if (!b and a)
            s = '0' + s;
        if (!b and c)
            s += '1';

        if(b){
            b--;
            s += "01";
            while (b--)
            {
                s += (s[s.size() - 1] == '1') ? '0' : '1';
            }
        }
        
        while (a--)
        {
            s='0'+s;
        }
        int in=s.size()-1;
        if (s.size())
        {
            if (s[s.size() - 1] != '1')
                in = s.size() - 2;
        }
        while (c--)
        {
           
            s.insert(in,"1");
        }
        
        cout<<s<<endl;
    }
    
    return 0;
}