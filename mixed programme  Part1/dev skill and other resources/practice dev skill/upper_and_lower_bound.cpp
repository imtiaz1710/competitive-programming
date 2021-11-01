// Code by myself... but don't know whether it is right or wrong..


// #include <bits/stdc++.h>
// #define ll long long
// #define fin freopen("in.txt", "r", stdin)
// #define fout freopen("out.txt","w", stdout)
// #define dbg(x) cerr << #x << ": " << x << endl
// #define fastio ios::sync_with_stdio (false); cin.tie (0);
// using namespace std;


// int main(){
//     int n;
//     cin>>n;   //number of elements in the array
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin>>a[i];
//     }
//     sort(a,a+n);
//     int key;            // searching value
//     cin>>key;
//     int left=0,right=n-1;
//     int flag=0;             //flag to check whether the value is found
//     int mid;
//     while (left<=right)
//     {
//         mid=(left+right)/2;
//         if(a[mid]==key)
//         {
//             flag=1;
//             break;
//         }
//         else if(a[mid]<key)
//         {
//             left=mid+1;
//         }
//         else
//         {
//             right=mid-1;
//         }
        
//     }

//     if(flag)
//     {
//         cout<<"element Found "<<endl;
//         cout<<"Lower bound "<<a[mid]<<endl;
//         cout<<"Upper bound "<<a[mid+1]<<endl;
//     }
//     else
//     {
//         cout<<"Element not found"<<endl;
//         cout<<"Lower bound "<<a[right]<<endl;
//         if(left>n-1)
//         {
//             cout<<"Upper bound not found"<<endl;
//         }
//         else
//         {
//             cout<<"Upper bound "<<a[left]<<endl;
//         }
        
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
    int n;
    cin>>n;   //number of elements in the array
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    int key;            // searching value
    cin>>key;
    int l=0,r=n-1;
    int mid;
    int f=0;
    int lower_bound_ans=0;
    int upper_bound_ans=0;

    while (l<=r)
    {
        mid=(l+r)/2;
        if(a[mid]<=key)
        {
            lower_bound_ans=a[mid];
            l=mid+1;
        }
        else
        {
            r=mid-1;
            upper_bound_ans=a[mid];
        }
    }
    cout<<lower_bound_ans<<endl;
    cout<<upper_bound_ans<<endl;
    return 0;
}
