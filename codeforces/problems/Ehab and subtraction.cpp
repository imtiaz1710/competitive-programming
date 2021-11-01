#include <bits/stdc++.h>
using namespace std;


int main(){
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    int n,k;
    cin>>n>>k;
    
    set <int> s;
    s.insert(0);
        for (int i = 0; i < n; i++)
        {
            int tmp;
            cin>>tmp;
            s.insert(tmp);
        }
        auto it=s.begin();
        for (int i = 0; i < k; i++)
        {
            if(next(it)==s.end())
            {
                cout<<0<<endl;
                continue;
            }
            cout<<*next(it)-*it<<endl;
            it=next(it);
        }
        
        
        
    
    
    
    return 0;
}