#include <bits/stdc++.h>
#define ll long long
#define filein freopen("/home/imtiaz/Desktop/Dev skill contest 1/in.txt", "r", stdin)
#define fileout freopen("/home/imtiaz/Desktop/Dev skill contest 1/out.txt","w", stdout)
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // filein;
    // fileout;
    int n;
    cin>>n;
    int a[n];
    char ch;
    int cnt=0;
    for (int i = 0; i < n; i++)
    {
        cin>>ch>>a[i];
        if(ch=='-')
        cnt++;
    }
    cout<<cnt;
    cout<<endl;
    
    return 0;
}