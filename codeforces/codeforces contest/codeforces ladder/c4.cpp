#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int> a,pair<int,int> b)
{
    return a.first>b.first;
}
int main()
{
    int n,k;
    cin>>n>>k;
    vector <pair<int,int>> a(n);
    vector <pair<int,int>> d;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i].first;
    }
    for (int i = 0; i < n; i++)
    {
        cin>>a[i].second;
    }
    //sort(a.begin(),a.end(),cmp);
    for (int i = 0; i < n; i++)
    {
         d.push_back(make_pair((a[i].first-a[i].second),i));
    }
   
    
    sort(d.begin(),d.end());
    
    
    
    int sum=0;
    for (int i = 0; i < k; i++)
    {
        sum+=a[d[i].second].first;
    }
    for (int i = k; i < n; i++)
    {
        if(d[i].first<0){
            sum+=a[d[i].second].first;
        }
        else
        sum+=a[d[i].second].second;
    }
    
    cout<<sum<<endl;
    
}