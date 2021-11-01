#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,k,cnt=0;
    set<int> s;
    set<int>::iterator it;
    
    cin>>n>>m>>k;
    int capacity[n+1]={0};
    int a[n];
    
    

    for (int  i = 1; i <=m; i++)
    {
        s.insert(i);
    }

    for (int  i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    for (int i = 0; i < n; i++)
    {
        it=s.lower_bound(a[i]);
        if(it==s.end()) it=s.begin();
        if (*it!=a[i])
        {
            cnt++;
        }
        capacity[*it]++;
        if(capacity[*it]==k) s.erase(*it);
        
    }

    cout<<cnt<<endl;
    
    


       
    
}
