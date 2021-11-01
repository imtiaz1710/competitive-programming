#include <bits/stdc++.h>
#define ll long long
#define fin freopen("in.txt", "r", stdin)
#define fout freopen("out.txt","w", stdout)
using namespace std;


int main(){
   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while (t--)
    {

        int n;
        cin>>n;
        int a[n];
        set<int> iset;
        set<int> res;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            int first_size=iset.size();
            iset.insert(a[i]);
            int last_size=iset.size();
            if(first_size==last_size)
            {
                res.insert(last_size);
                iset.clear();
                iset.insert(a[i]);
            }
        }
        if(!iset.empty())
        res.insert(iset.size());
        auto it=res.end();
        it--;
        cout<<*it<<endl;
        
    }
    
    return 0;
}