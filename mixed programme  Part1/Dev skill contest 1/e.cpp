#include <bits/stdc++.h>
using namespace std;


int main(){
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int q;
    cin>>q;
    for (int i = 0; i < q; i++)
    {
        int x;
        cin>>x;
        auto it=lower_bound(a,a+n,x);
        if(*it==x)
        {
            cout<<"Yes"<<" "<<it-a+1<<endl;
        }
        else
        {
            cout<<"No"<<" "<<it-a+1<<endl;
        }
        

    }
    
    
    
    return 0;
}