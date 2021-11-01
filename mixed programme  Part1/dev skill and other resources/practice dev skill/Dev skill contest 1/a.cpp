#include <bits/stdc++.h>
using namespace std;


int main(){
    // freopen("in.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);
    int q;
    cin>>q;
    set<int> s;
    while (q--)
    {
        
        int type,x;
        cin>>type>>x;
        set<int>::iterator it;
        switch(type)
        {
            case 1:
                s.insert(x);
                break;
            case 2:
                it=s.find(x);
                if(it!=s.end())
                {
                    s.erase(x);
                }
                break;
            case 3:
                it=s.find(x);
                if(it!=s.end())
                {
                cout<<"Yes"<<endl;
                }
                else cout<<"No"<<endl;

                break;

        }
    }
    
    return 0;
}