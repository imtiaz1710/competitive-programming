// #include <bits/stdc++.h>
// #define ll long long
// #define us unsigned short int
// #define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
// #define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
// #define dbg(x) cerr << #x << ": " << x << endl
// #define fastio ios::sync_with_stdio (false); cin.tie (0);
// using namespace std;


// int main(){
//     ll n;
//     cin>>n;
//     ll sum=(n*(n+1))/2;
//     ll ter;
//     ter = sum / 2;
//     if(sum&1) 
//     {
//         ter++;
//         cout<<1<<endl;
//     }
//     else
//     {
//         cout<<0<<endl;
//     }
    
    
//     ll back=n;
//     ll so_far=0;
//     vector <ll> res1;
//     vector <ll> res2;
//     while (so_far+back<=ter)
//     {
//         so_far+=back;
//         res1.push_back(back);
//         back--;
//     }
//     cout<<back<<endl;
//     ll front=1;
//     while (so_far+front<=ter)
//     {
//         so_far+=front;
//         res2.push_back(front);
//       //  cout<<front<<endl;
//         front++;
//     }
//     while(so_far!=ter)
//     {
//         so_far -= res1.back();
//         res1.pop_back();
        
//         //res1[res1.size()-1];
//         while (so_far + front <= ter)
//         {
//             so_far += front;
//             res2.push_back(front);
//             //  cout<<front<<endl;
//             front++;

//         }
//     }
    
//     cout<<res1.size()+res2.size()<<" ";
//     //cout<<so_far<<endl;
//     //cout<<ter<<endl;
//     // for(auto tmp: res1)
//     // {
//     //     cout<<tmp<<" ";
//     // }
//     // for(auto tmp: res1)
//     // {
//     //     cout<<tmp<<" ";
//     // }
//     // cout<<endl;
//     return 0;
// }

#include <bits/stdc++.h>
#define ll long long
#define us unsigned short int
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt", "w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
using namespace std;

int main()
{
    ll n;
    cin >> n;
    ll sum = (n * (n + 1)) / 2;
    ll ter;
    ter = sum / 2;
    if (sum & 1)
    {
        ter++;
        cout << 1 << endl;
    }
    else
    {
        cout << 0 << endl;
    }

    ll back = n;
    ll so_far = 0;
    vector<ll> res1;
    vector<ll> res2;
    while (so_far + back <= ter)
    {
        so_far += back;
        res1.push_back(back);
        back--;
    }
    // cout<<back<<endl;
    ll front = 1;
    while (so_far + front <= ter)
    {
        so_far += front;
        res2.push_back(front);
        //  cout<<front<<endl;
        front++;
    }
    while (so_far != ter)
    {
        so_far -= res1.back();
        res1.pop_back();

        //res1[res1.size()-1];
        while (so_far + front <= ter)
        {
            so_far += front;
            res2.push_back(front);
            //  cout<<front<<endl;
            front++;
        }
    }

    cout << res1.size() + res2.size() << " ";
    // cout << so_far << endl;
    // cout << ter << endl;
    for (auto tmp : res1)
    {
        cout << tmp << " ";
    }
    for (auto tmp : res2)
    {
        cout << tmp << " ";
    }
    cout << endl;
    return 0;
}