// #include <bits/stdc++.h>
// #define ll long long
// #define us unsigned short int
// #define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
// #define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
// #define dbg(x) cerr << #x << ": " << x << endl
// #define fastio ios::sync_with_stdio (false); cin.tie (0);
// using namespace std;
// vector<int> subset;
// vector<int> ele;
// vector<int> ans;
// int n;
// int mx;
// void search(int k)
// {
//     if (k == n + 1)
//     {
//         int sub_sz=subset.size();
//         if(sub_sz >=2)
//         {
//             int sum=0;
//             for (int i = 1; i < sub_sz ; i++)
//             {
//                sum+=abs( ele[subset[i-1]]-ele[subset[i]]);
//             }
           
//             if(( sum==mx and ans.size()>sub_sz ) or sum > mx)
//             {
//                 ans.clear();
//                 for (int i = 0; i < sub_sz ; i++)
//                 {
//                     ans.push_back(ele[subset[i]]);
//                 }
//                 mx = sum;
//             }
//         }
//     }
//     else
//     {
//         // include k in the subset
//         subset.push_back(k);
//         search(k + 1);
//         subset.pop_back();
//         // don’t include k in the subset
//         search(k + 1);
//     }
// }

// int main(){
//     int t;
//     scanf("%d",&t);
//     while (t--)
//     {
//         mx=0;
//         cin>>n;
//         ele.clear();
//         ans.clear();
//         ele.resize(n+1);
//         for (int i = 1; i <= n; i++)
//         {
//             scanf("%d",&ele[i]);
//         }
//         search(1);
//         int ans_sz=ans.size();
//         printf("%d\n",ans_sz);
//         for (int i = 0; i < ans_sz; i++)
//         {
//             printf("%d ",ans[i]);
//         }
//         cout<<endl;
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
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        set<int> indx;
        bool barce=0;
        bool komce=0;
        for (int i = 1; i < n; i++)
        {
            if(a[i]>a[i-1])
            {
                barce=1;
            }
            else if(a[i]<a[i-1] and barce)
            {
                barce=0;
                indx.insert(i - 1);
            }

        }
        for (int i = 1; i < n; i++)
        {
            if (a[i] < a[i - 1])
            {
                komce = 1;
            }
            else if (a[i] > a[i - 1] and komce)
            {
                komce = 0;
                indx.insert(i-1);
            }
        }
        indx.insert(0);
        indx.insert(n-1);
        cout<<indx.size()<<endl;
        for (auto i = indx.begin(); i!= indx.end() ; i++)
        {
            cout<<a[*i]<<" ";
            //cout<<*i+1<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
