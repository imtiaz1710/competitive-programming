#include <bits/stdc++.h>
using namespace std;


int main(){
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    int t;
    cin>>t;
    while (t--)
    {
        deque <int> dq;
        int n,k;
        cin>>n>>k;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        for (int i = 0; i < k; i++)
        {
            dq.push_back(a[i]);
        }
        auto it=max_element(dq.begin(),dq.end());
        cout<<*it<<" ";
        for (int i = 0; i < n-k; i++)
        {
            dq.pop_front();
            dq.push_back(a[k+i]);
            it=max_element(dq.begin(),dq.end());
            cout<<*it;
            if(i!=n-k-1) cout<<" ";
        }
        cout<<endl;
        
        
    }
    
    return 0;
}