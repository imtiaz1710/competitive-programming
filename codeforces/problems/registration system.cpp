#include <bits/stdc++.h>
using namespace std;
typedef pair<string,int> PII;
vector <PII> v;

int main(){
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin>>s;
        int f=0;
        for (int i = 0; i < v.size(); i++)
        {
            if(v[i].first==s) 
            {
                cout<<v[i].first<<v[i].second<<endl;
                v[i].second++;
                f=1;
                break;
            }
        }
        if(f==0) 
        {
            cout<<"OK"<<endl;
            v.push_back(PII(s,1));
        }

        
    }
    
    
    return 0;
}