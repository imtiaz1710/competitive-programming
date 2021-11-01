#include <bits/stdc++.h>
#define ll long long
#define fin freopen("in.txt", "r", stdin)
#define fout freopen("out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;


int main(){
    int n,m;
    while (cin>>n>>m,m or n)
    {
        vector <int> dragon(n);
        vector <int> knight(m);
        for (int i = 0; i < n; i++)
        {
            cin>>dragon[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin>>knight[i];
        }
        sort(dragon.begin(),dragon.end());
        sort(knight.begin(),knight.end());
        int dragon_e_ghuro=0;
        int knight_e_ghuro=0;
        int total=0;
        while (dragon_e_ghuro!=dragon.size() && knight_e_ghuro!=knight.size())
        {
            if(dragon[dragon_e_ghuro]<=knight[knight_e_ghuro])
            {
                dragon_e_ghuro++;
                total+=knight[knight_e_ghuro];
            }
            knight_e_ghuro++;
        }
        if(dragon.size()==dragon_e_ghuro)
        cout<<total<<endl;
        else
        {
            cout<<"Loowater is doomed!"<<endl;
        }
        
        
    }
    
    return 0;
}