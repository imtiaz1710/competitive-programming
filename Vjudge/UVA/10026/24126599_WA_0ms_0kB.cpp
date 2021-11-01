#include <bits/stdc++.h>
#define ll long long
#define fin freopen("in.txt", "r", stdin)
#define fout freopen("out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;


int main(){
fin,fout;
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vector <pair<int,int>> v;
        vector<int> task;
        for (int i = 0; i < n; i++)
        {
            int tmp1,tmp2;
            cin>>tmp1>>tmp2;
            v.push_back(make_pair(tmp1,tmp2));
           //task.push_back(i);
        }
        int size=v.size();
        int min;
        while (size)
        {
            int i=0;
            while (1)
            {
                if(v[i].first!=-1)
                {
                    min=i;
                    break;
                }
                i++;
            }
            for (int j = 0; j < n; j++)
            {
                if(v[j].first==-1) continue;
                if(v[min].first*v[j].second > v[j].first*v[min].second)
                min=j;

            }
            
            task.push_back(min);
            v[min].first=-1;
            size--;
        }
        bool is_first=0;
        for(int x: task)
        {
            if(is_first)
            cout<<" ";

            cout<<x+1;
            is_first=1;
        }
        // for(pair<int,int> x:v)
        // {
        //     dbg(x.first);
        //     dbg(x.second);z
        // }
        if(t)
        cout<<endl;
        cout<<endl;
    }
    
    return 0;
}