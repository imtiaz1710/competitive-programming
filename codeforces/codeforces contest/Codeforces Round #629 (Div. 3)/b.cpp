// #include <bits/stdc++.h>
// #define ll long long
// #define fin freopen("in.txt", "r", stdin)
// #define fout freopen("out.txt","w", stdout)
// #define dbg(x) cerr << #x << ": " << x << endl
// #define fastio ios::sync_with_stdio (false); cin.tie (0);
// #define mx (int)1e5+2
// using namespace std;


// int main(){
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         int  x;
//         int pos;
//         cin>>x>>pos;
//         int  n=x;
        
//         int cnt=0;
//         int res;
//         for(int i=2;cnt!=pos;i++)
//         {
//             bitset<mx> b1(i);
//             if(b1.count()==2)
//             {
//                 cnt++;
//             }
//             if(cnt==pos) res=i;
//         }
//         bitset<mx> b(res);
//         string str=b.to_string('a', 'b');
//         string str2 = str.substr (mx-n,n);
//         cout<<str2<<endl;
        
        
//     }
//     return 0;
// }

#include <bits/stdc++.h>

#define ll long long
#define fin freopen("in.txt", "r", stdin)
#define fout freopen("out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
#define mx (int)1e5+2
using namespace std;
unsigned int countSetBits(unsigned int n) 
{ 
    unsigned int count = 0; 
    while (n) { 
        count += n & 1; 
        n >>= 1; 
    } 
    return count; 
} 

void bin(unsigned n,int pow) 
{ 
    unsigned i; 
    for (i = 1 << pow; i > 0; i = i / 2) 
        (n & i)? printf("b"): printf("a"); 
} 

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int  x;
        int pos;
        cin>>x>>pos;
        const int n=x;
        
        int cnt=0;
        int res;
        int pow=2;
        for(int i=2;cnt!=pos;i++)
        {
           
            if(pow<i) pow*=2;
            if(countSetBits(i) ==2)
            {
                cnt++;
            }
            if(cnt==pos) res=i;
        }

        
    
        bin(res,pow);
        cout<<endl;
        
        
    }
    return 0;
}