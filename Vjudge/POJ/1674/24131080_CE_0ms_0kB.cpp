#include <iostream>
#include <vector>

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
        //vector <int> st;
        int n;
        cin>>n;
        vector <int> v(n);
        for (int i = 0; i < n; i++)
        {
            int tmp;
            cin>>tmp;
            tmp--;
            v[i]=tmp;
        }
        int mark[n]={0};
        int cnt=0;
        for (int i = 0; i < n; i++)
        {
            if(v[i]!=i && !mark[i])
            {
                int j=v[i];
                while (!mark[j])
                {
                // st.push_back(j);
                    cnt++;
                    mark[j]=1;
                    j=v[j];
                }
                cnt--;

                //  for (int loop  = st.size()-1; loop>0; loop--)
                //  {
                //      result.push_back(make_pair(st[loop],st[loop-1]));
                //     cnt++;
                //  }  
                //  st.clear();
                
                //st.push_back(-1);
            }
        }
        cout<<cnt<<endl;
    }
    

   
  
    // st.pop_back();
    // cout<<cnt<<endl;
    // for (int i = st.size()-1; i > 0; i--)
    // {
    //     if(st[i-1]==-1 || st[i]==-1)
    //     continue;
    //     cout<<st[i]<<" "<<st[i-1]<<endl;
    // }
    
    return 0;
}
