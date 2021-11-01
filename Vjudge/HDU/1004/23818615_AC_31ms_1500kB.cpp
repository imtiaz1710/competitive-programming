#include <bits/stdc++.h>
using namespace std;


int main(){
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    string ans_string;
    int n;
    cin>>n;
    while (n)
    {
        list <string> li;
        for (int i = 0; i < n; i++)
        {
            string str;
            cin>>str;
            li.push_back(str);
        }
        int ans=0;
        while (!li.empty())
        {
            string tmp=li.front();
            int cnt=0;
            for (auto i = li.begin(); i != li.end(); i++)
            {
                if(tmp==*i) cnt++;
            }
            if(ans<cnt)
            {
                ans=cnt;
                ans_string=tmp;
            }
            li.remove(tmp);
        }
        cout<<ans_string<<endl;
        cin>>n;
        
    }
    
    return 0;
}