// #include <bits/stdc++.h>
// #define ll long long
// #define us unsigned short int
// #define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
// #define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
// #define dbg(x) cerr << #x << ": " << x << endl
// #define fastio ios::sync_with_stdio (false); cin.tie (0);
// using namespace std;


// int main(){
//     int t;
//     cin>>t;
//     while (t--)
//     {
//         int n;
//         cin>>n;
//         int a[n];
//         for (int i = 0; i < n; i++)
//         {
//             cin>>a[i];
//         }
//         sort(a,a+n);
//         queue<int> even;
//         queue<int> odd;
//         for (int i = 0; i < n/2; i++)
//         {
//             if(a[i]%2==0)
//             {
//                 even.push(i);
//             }
//             else
//             {
//                 odd.push(i);
//             }
//         }
//         for (int i = n-1; i >= n/2; i--)
//         {
//             if(a[i]%2==0 and !even.empty())
//             {
//                 int indx=even.front();
//                 a[indx]=a[i]=-1;
//                 even.pop();
//             }
//             else if(a[i]%2==1 and !odd.empty())
//             {
//                 int indx = odd.front();
//                 a[indx] = a[i] = -1;
//                 odd.pop();
//             }
            
//         }
//         for (int i = 1; i < n; i++)
//         {
//             if(a[i]!=-1 and a[i-1]!=-1 and abs(a[i]-a[i-1])==1)
//             {
//                 a[i]=a[i-1]=-1;
//             }
//         }
//         bool f=0;
//         for (int i = 0; i < n; i++)
//         {
//             if(a[i]!=-1)
//             f=1;
//         }
//         if(f)
//         {
//             cout<<"NO"<<endl;
//         }
//         else
//         {
//             cout << "YES"<<endl;
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
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int a[n];
        int e,o;
        e=o=0;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            if(a[i]%2==1)
                o++;
            else
            {
                e++;
            }
            
        }
        if(o%2==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            sort(a,a+n);
            bool f=0;
            for (int i = 1; i < n; i++)
            {
                if(abs(a[i]-a[i-1])==1)
                {
                    f=1;
                }
            }
            if(f)
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
            
        }
        
    }
    
    return 0;
}