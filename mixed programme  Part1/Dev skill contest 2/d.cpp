// #include <bits/stdc++.h>
// #define ll long long
// #define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
// #define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
// #define dbg(x) cerr << #x << ": " << x << endl
// #define fastio ios::sync_with_stdio (false); cin.tie (0);
// using namespace std;


// int main(){
//     fin,fout;
//     int n;
//     while (cin>>n,n)
//     {
//         map<int,int> m;
//         int tmp[n];
//         for (int i = 0; i < n; i++)
//         {
//             int a,b;
//             cin>>a>>b;
//             tmp[i]=a;
//             m[a]=b;
//         }
//         int flag=0;
//         for (int i = 0; i < n; i++)
//         {
//             char s='S';
//             dbg(s);
//             int b=m[tmp[i]];
//             dbg(tmp[i]);
//             dbg(m[tmp[i]]);
//             dbg(b);
//             dbg(m[b]);
            
//             if(m[b]!=m[tmp[i]])
//             {
                
                
//                 cout<<"NO"<<endl;
//                 flag=1;
//                 break;
//             }
//         }
//         if(flag==0)
//         {
//             cout<<"YES"<<endl;
//         }
        
//     }
    
//     return 0;
// }

#include <bits/stdc++.h>
#define ll long long
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;


int main(){
    //fin,fout;
    int n;
    while (cin>>n,n)
    {
        vector <int> a(n);
        vector <int> b(n);
        for (int  i = 0; i < n; i++)
        {
            cin>>a[i]>>b[i];
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        if(a==b)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
        
    }
    
    return 0;
}