//after a lots of try finally got accepted


#include <bits/stdc++.h>
using namespace std;


int main(){
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    vector <int> v;
    int n;
    cin>>n;
    int a[n];
    bool b[n+1]={0};
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < n; i++)
    {
        b[a[i]]=1;
    }
    for (int i = 1; i <= n; i++)
    {
        if(b[i]==0) v.push_back(i);
    }
   
    int j=0;
    for (int i = 0; i < n; i++)
    {
        int last_index;
        if(a[i]==0)
        {
            
            if(v[j]==i+1)
            {
                if(j==v.size()-1)
                swap(a[last_index],v[j]);
                else
                swap(v[j],v[j+1]);

            }
            a[i]=v[j++];
            last_index=i;
            
        } 
        
    }
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}