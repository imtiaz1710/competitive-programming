#include <bits/stdc++.h>
#define ll long long
#define fin freopen("in.txt", "r", stdin)
#define fout freopen("out.txt","w", stdout)
using namespace std;


int main(){
    // fin;
    // fout;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    //int testcasecountkoro=0;
    while (t--)
    {
      // testcasecountkoro++;

        int n;
        cin>>n;
        if(n==0) 
        {
            cout<<0<<endl;
            continue;
        }
        
        int a[n];
        set<int> iset;
        set<int> res;
        map<int,int> index;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        
        for (int i = 0; i < n; i++)
        {
            
            //if(testcasecountkoro==12) cout<<a[i]<<endl;
            int first_size=iset.size();
            iset.insert(a[i]);
            int last_size=iset.size();
            if(first_size==last_size)
            {
                res.insert(last_size);
                iset.clear();
                i=index[a[i]];
                continue;
            }
            index[a[i]]=i;
            
        }
        if(!iset.empty())
        res.insert(iset.size());
        auto it=res.end();
        it--;
        cout<<*it<<endl;
        
    }
    
    return 0;
}