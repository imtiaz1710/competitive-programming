#include <bits/stdc++.h>
using namespace std;
#define mp make_pair

int main(){
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    int q;
    cin>>q;
    map <string,int> m;
    string x;
    int y;
    map<string,int>::iterator it;
    while (q--)
    {
        int type;
        cin>>type;
        switch (type)
        {
        case 1:
            cin>>x>>y;
            m[x]=m[x]+y;
            break;
        case 2:
            cin>>x;
            it=m.find(x);
            if(it!=m.end())
            {
                m.erase(x);
            }
            break;
        default:
            cin>>x;
            cout<<m[x]<<endl;
            break;
        }
    }
    
    return 0;
}