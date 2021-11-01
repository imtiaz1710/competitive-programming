#include <bits/stdc++.h>
using namespace std;


int main(){
    // freopen("in.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);
    int t;
    cin>>t;
    int tc=0;
    while (t--)
    {
        int n;
        cin>>n;
        map <string,int> m;
        for (int i = 0; i <n; i++)
        {
            string str;
            int num;
            cin>>str>>num;
            m.insert(make_pair(str,num));
        }
        int d;
        string key;
        cin>>d>>key;
        if (!m[key])
        {
            printf("Case %d: Do your own homework!\n",++tc);
            continue;
        }
        if(m[key]<=d)
        {
            printf("Case %d: Yesss\n",++tc);
        }
        else
        {
            if(m[key]<=d+5)
            printf("Case %d: Late\n",++tc);
            else
            printf("Case %d: Do your own homework!\n",++tc);
        }
    }
    return 0;
}