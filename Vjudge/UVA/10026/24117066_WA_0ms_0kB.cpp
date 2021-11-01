#include <bits/stdc++.h>
#define ll long long
#define fin freopen("in.txt", "r", stdin)
#define fout freopen("out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;


int main(){
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
            task.push_back(i);
        }
        for (int i = 0; i < n-1; i++)
        {
            int min=i;
            for (int j = i+1; j < n; j++)
            {
                if(v[min].first*v[j].second > v[j].first*v[min].second)
                min=j;

            }
            if(min!=i)
            {
            swap(v[i],v[min]);
            swap(task[i],task[min]);
            }
            
        }
        for(int x:task)
        {
            cout<<x+1<<" ";
        }
        if(t)
        cout<<endl;
        cout<<endl;
        
        
    }
    
    return 0;
}