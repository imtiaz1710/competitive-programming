// #include <bits/stdc++.h>
// #define ll long long
// #define fin freopen("in.txt", "r", stdin)
// #define fout freopen("out.txt","w", stdout)
// #define dbg(x) cerr << #x << ": " << x << endl
// #define fastio ios::sync_with_stdio (false); cin.tie (0);
// #define MX 150009
// using namespace std;


// int main(){
//     int n;
//     int mark[MX]={0};
//     cin>>n;
//     vector <int> v;
//     for (int i = 0; i < n; i++)
//     {
//         int tmp;
//         cin>>tmp;
//         if(!mark[tmp])
//         v.push_back(tmp);
//         mark[tmp]++;
       
//     }
//     sort(v.begin(),v.end());
//     for (int i = 0; i < v.size(); i++)
//     {
//         if(mark[v[i]])
//         {
//             if(v[i]-1!=0 && !mark[v[i]-1])
//             {
//                 mark[v[i]]--;
//                 mark[v[i]-1]++;
//             }
//             //v[i]+1!=15000
//             if(mark[v[i]]>1 && !mark[v[i]+1])
//             {
//                 mark[v[i]+1]++;
//             }
//         }
//     }
//     int cnt=0;
//     for (int i = 1; i < MX; i++)
//     {
//         if(mark[i])
//         cnt++;
//     }
//     cout<<cnt<<endl;
    
    
//     return 0;
// }

#include <bits/stdc++.h>
#define ll long long
#define fin freopen("in.txt", "r", stdin)
#define fout freopen("out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
#define MX 150009
using namespace std;


int main(){
    int n;
    int mark[MX]={0};
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin>>tmp;
        if(!mark[tmp])
        mark[tmp]++;
       
    }
    
    int cnt=v.size();
    int blank=0;
    int need=0;
    for (int i = 1; i < MX; i++)
    {
       if(mark[i]==0)
       {
           if(need)
           {
               cnt++;
               need=0;
           }
           else blank=1;

       }
       if(mark[i]>1 )
       {
           if(blank)
            {
            mark[i]--;
            blank=0;
            cnt++;
            }
           if(mark[i]>1)
           need=1;
       }
   }
    cout<<cnt<<endl;
    
    
    return 0;
}