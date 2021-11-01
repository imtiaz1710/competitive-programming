// #include <bits/stdc++.h>
// #define ll long long
// #define fin freopen("in.txt", "r", stdin)
// #define fout freopen("out.txt","w", stdout)
// #define dbg(x) cerr << #x << ": " << x << endl
// #define fastio ios::sync_with_stdio (false); cin.tie (0);
// using namespace std;


// int main(){
//     stack <int> st;
//     vector <pair<int,int>> result;
//     int n;
//     cin>>n;
//     vector <int> v(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin>>v[i];
//     }
//     int mark[n]={0};
//     int cnt=0;
//     for (int i = 0; i < n; i++)
//     {
//         if(v[i]!=i && !mark[i])
//         {
//             int j=v[i];
//             while (!mark[j])
//             {
//                 st.push(j);
//                 mark[j]=1;
//                 j=v[j];
//             }

//              while (st.size()!=1)
//              {
                
//                 int a=st.top();
//                 st.pop();
//                 int b=st.top();
                
//                // swap(v[a],v[b]);
//                 result.push_back(make_pair(a,b));

//                 cnt++;
//              }
//              st.pop();
//         }
//     }
   
  
    
//     cout<<cnt<<endl;
//     for (int i = 0; i < result.size(); i++)
//     {
//         cout<<result[i].first<<" "<<result[i].second<<endl;
//     }
    
//     return 0;
// }


#include <bits/stdc++.h>
#define ll long long
#define fin freopen("in.txt", "r", stdin)
#define fout freopen("out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;


int main(){
    vector <int> st;
    vector <pair<int,int>> result;
    int n;
    scanf("%d",&n);
    vector <int> v(n);
    for (int i = 0; i < n; i++)
    {
       scanf("%d",&v[i]);
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
                st.push_back(j);
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
            
            st.push_back(-1);
        }
    }
   
  
    st.pop_back();
    printf("%d\n",cnt);
    for (int i = st.size()-1; i > 0; i--)
    {
        if(st[i-1]==-1 || st[i]==-1)
        continue;
        //cout<<st[i]<<" "<<st[i-1]<<endl;
        printf("%d %d\n",st[i],st[i-1]);
    }
    
    return 0;
}
