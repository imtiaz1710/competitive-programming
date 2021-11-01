// #include <bits/stdc++.h>
// #define ll long long
// #define us unsigned short int
// #define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
// #define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
// #define dbg(x) cerr << #x << ": " << x << endl
// #define fastio ios::sync_with_stdio (false); cin.tie (0);
// using namespace std;
// ll rtn;
// ll k;
// void pnt(string s ,ll cnt)
// {
//     if (k< cnt +cnt+cnt) 
//     {
//         rtn=cnt;
//         return;
//     }
   

//     cout << s + s;
//     pnt(s+s,cnt+cnt+cnt);
// }

// int main(){
//     string m_string="codeforce";
//     cin>>k;
    
//     cout<<m_string;
//     pnt("s",1);
//     for (int i = rtn; i <= k; i++)
//     {
//         cout<<'s';
//     }
//     cout<<endl;
//     //cout<<m_string<<endl;
    
//     return 0;
// }

#include <bits/stdc++.h>
#define ll long long
#define us unsigned short int
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;


int main(){
    string s;
    s="codeforces";
    int a[10];
    for (int i = 0; i < 10; i++)
    {
        a[i]=1;
    }
    
    ll k;
    cin>>k;
    if(k==1)
        cout<<s<<endl;
    else
    {
        ll loop=1;
        ll mul=1;
        while (loop++)
        {
            bool stop=0;
            for (int i = 0; i < 10; i++)
            {
                mul/=a[i];
                mul*=loop;
                a[i]=loop;
                if(mul>=k) 
                {
                    stop=1;
                    break;
                }
            }
            if(stop) break;
        }
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j <a[i] ; j++)
            {
                cout<<s[i];
            }
            
        }
        cout<<endl;kkl
        
    }
    
    return 0;
}