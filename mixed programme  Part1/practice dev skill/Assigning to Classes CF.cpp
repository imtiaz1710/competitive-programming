// #include <bits/stdc++.h>
// #define ll long long
// #define fin freopen("in.txt", "r", stdin)
// #define fout freopen("out.txt","w", stdout)
// #define dbg(x) cerr << #x << ": " << x << endl
// #define fastio ios::sync_with_stdio (false); cin.tie (0);
// using namespace std;


// int main(){
//     //fin,fout;
//     int t;
//     cin>>t;
//     while (t--)
//     {
        
//         int n;
//         cin>>n;
//         vector<int> v;
//         for (int i = 0; i < 2*n; i++)
//         {
//             int tmp;
//             cin>>tmp;
//             v.push_back(tmp);
//         }
//         if(n==1)
//         {
//             cout<<abs(v[0]-v[1])<<endl;
//             continue;
//         }

//         if(n%2==0)
//         {
//             v.push_back(0);
//             v.push_back(0);
//             n++;
//         }
       
//         sort(v.begin(),v.end());
//         vector <int> class1;
//         vector<int> class2;
//         int last=2*n-1,first=0;
        
//         for (int i = 0; i <(n-1)/2 ; i++)
//         {
//             if(v[first]==0)
//             first++;
//             else
//             class1.push_back(v[first++]);
//             if(v[first]==0)
//             first++;
//             else 
//             class2.push_back(v[first++]);
            
//             class1.push_back(v[last--]);
//             class2.push_back(v[last--]);
//         }
        
//         class1.push_back(v[first++]);
//         class2.push_back(v[last--]);
//         sort(class1.begin(),class1.end());
//         sort(class2.begin(),class2.end());
//         int med=(n+1)/2;
//         med--;
       
//         int res=abs(class1[med]-class2[med]);
//         cout<<res<<endl;
        
//     }
    
//     return 0;
// }


#include <bits/stdc++.h>
#define ll long long
#define fin freopen("in.txt", "r", stdin)
#define fout freopen("out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;


int main(){
    fin,fout;
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        n*=2;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        cout<<a[n/2]-a[n/2-1]<<endl;
    }
    
    return 0;
}