//After a lots of try...1 day long!

#include <bits/stdc++.h>
using namespace std; 
vector <int> a;
vector <int> b;
vector <int> trace;
int n;
int mx=0;
int findmin()
{
    vector<int> c(mx+2,0);

     for (int i = 0; i < n; i++)
     {
        c[a[i]]++;
     }
    int ans=0;
    for (int i = 1; i<=mx; i++)
    {
        if(!c[i]) continue;
        ans++;
        i+=2;
    }
  return ans;
}

int findmax()
{
    trace.resize(mx+2,0);
    b[0]--;
    trace[b[0]]=1;
    int cnt=1;
    for (int  i = 1; i < n; i++)
    {
        if(!trace[b[i]-1])
        {
            trace[b[i]-1]=1;
            b[i]--;
            cnt++;
            continue;
        }
        if(!trace[b[i]]) 
         {
             trace[b[i]]=1;
             continue;
         }
        if(!trace[b[i]+1])
        {
            trace[b[i]+1]=1;
            b[i]++;
            cnt++;
            continue;
        }
    }
     sort(b.begin(),b.end());
     b.erase(unique(b.begin(), b.end()), b.end()); 

    return b.size();
}

int main(){
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    
    cin>>n;
    a.resize(n,0);
    
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        if(a[i]>mx) mx=a[i];
    }
    
    sort(a.begin(),a.end());
    b=a;
    cout<<findmin()<<" "<<findmax()<<endl;
   
    return 0;
}