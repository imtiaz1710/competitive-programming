#include <bits/stdc++.h>
#define ll long long
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;
bool cmp(pair<string,double> a,pair<string,double> b)
{
    // if(a.second==b.second)
    // return a.first<b.first;
     return a.second>b.second;
}

int main(){
    //fin,fout;
    int n,m;
    cin>>n>>m;
    vector <pair<string,double>> vote_count;
    for (int i = 0; i < n; i++)
    {
        string str;
        cin>>str;
        vote_count.push_back(make_pair(str,0));
    }
    vote_count.push_back(make_pair("Invalid",0));
    
    for (int i = 0; i < m; i++)
    {
        string str;
        cin>>str;
        int cnt=0;
        int previous;
        for (int i = 0; i < str.size(); i++)
        {
            if(str[i]=='X')
            {
                cnt++;
                if(cnt==2)
                {
                    vote_count[previous].second--;
                    vote_count[n].second++;
                    break;
                }
                vote_count[i].second++;
                previous=i;
                
            }
        }
        if(cnt==0)
        vote_count[n].second++;
        
    }
    for (int i = 0; i < vote_count.size(); i++)
    {
        vote_count[i].second=(double)vote_count[i].second*100.0/(double)m;
    }
    sort(vote_count.begin(),vote_count.end()-1,cmp);
    
    for (int i = 0; i < vote_count.size(); i++)
    {
        cout<<vote_count[i].first<<" ";
            
        printf("%0.2f%%\n",vote_count[i].second);
    }
    
    
    return 0;
}