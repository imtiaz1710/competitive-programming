#include <bits/stdc++.h>
#define ll long long
#define fin freopen("in.txt", "r", stdin)
#define fout freopen("out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;


int main(){
    //fin,fout;
    int c,s;
    int tc=0;
    while (cin>>c>>s)
    {
        vector <int> v;
        int total=0;
        for (int i = 0; i < s; i++)
        {
            int tmp;
            cin>>tmp;
            total+=tmp;
            v.push_back(tmp);
        }
        double avg=(double)total/(double)c;
        int loop=s;
        while (loop!=2*c)
        {
            v.push_back(0);
            loop++;
        }
        sort(v.begin(),v.end());
        printf("Set #%d\n",++tc);
        int l=0,r=v.size()-1;
        double imb=0;
        for (int i = 0; i < c; i++)
        {
            cout<<" "<<i<<":";
            imb+=abs((v[l]+v[r])-avg);
            if(v[l] || v[r])cout<<" ";
            if(v[l]) cout<<v[l]<<" ";
            if(v[r]) cout<<v[r];
            cout<<endl;
            l++,r--;
        }
        printf("IMBALANCE = %.5f\n",imb);
        cout<<endl;
        
    }
    
    return 0;
}