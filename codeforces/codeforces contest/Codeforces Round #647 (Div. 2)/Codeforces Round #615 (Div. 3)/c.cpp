// #include <bits/stdc++.h>
// #define ll long long
// #define us unsigned short int
// #define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
// #define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
// #define dbg(x) cerr << #x << ": " << x << endl
// #define fastio ios::sync_with_stdio (false); cin.tie (0);
// using namespace std;


// int main(){
//     ll t;
//     cin>>t;
//     while (t--)
//     {
//         ll n;
//         cin>>n;
//         queue<ll> q;

//             // Prll the number of 2s that divide n
//             while (n % 2 == 0)
//             {   
//                 q.push(2);
//                 n = n / 2;
//             }

//             // n must be odd at this poll.  So we can skip
//             // one element (Note i = i +2)
//             for (ll i = 3; i <= sqrt(n); i = i + 2)
//             {
//                 // While i divides n, prll i and divide n
//                 while (n % i == 0)
//                 {
//                    q.push(i);
//                     n = n / i;
//                 }
//             }

//             // This condition is to handle the case when n
//             // is a prime number greater than 2
//             if (n > 2)
//                 q.push(n);
       
//         if((ll)q.size()<3)
//         {
//             cout<<"NO"<<endl;
//         }
//         else
//         {
//             cout<<"YES"<<endl;
//             int loop=2;
//             while (loop--)
//             {
//                 cout<<q.front()<<" ";
//                 q.pop();
//             }
//             int mul=1;
//             while (!q.empty())
//             {
//                 mul*=q.front();
//                 q.pop();
//             }
//             cout<<mul<<endl;

            
//         }
        
        
//     }
    
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
    ll t;
    cin>>t;
    while (t--)
    {
        ll n;
        cin>>n;
        int sq=sqrt(n)+1;
        int a,b,c;
        bool f=0;
        for(int i=2;i<=sq;i++)
        {
            if(n%i==0)
            {
                int div=n/i;
                int sq2=sqrt(div);
                for(int j=2;j<=sq2;j++)
                {
                    if(div%j==0 )
                    {
                        a=j;
                        b=div/j;
                        c=i;
                        if(a!=b and a!=c and b!=c)
                        {
                            f=1;
                            break;
                        }
                    }
                }
                if(f) break;

            }
        }

        if(!f) cout<<"NO"<<endl;
        else{
            cout<<"YES"<<endl;
            cout<<a<<" "<<b<<" "<<c<<endl;
        }
    }
}