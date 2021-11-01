#include <bits/stdc++.h>
using namespace std;


int main(){
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    int n;
    cin>>n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    sort(a.begin(),a.end());
    for(auto x: a)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}