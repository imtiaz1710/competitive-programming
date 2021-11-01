#include <bits/stdc++.h>
#define ll long long
#define fin freopen("in.txt", "r", stdin)
#define fout freopen("out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
#define mx (int)1e6
using namespace std;
bool mark[mx];
vector <ll> prime;
void seive()
{
    mark[0]=mark[1]=1;
    for(int i=4;i<mx;i+=2) mark[i]=1;
    for(int i=3;i*i<=mx;i+=2)
        for(int j=i*i;j<mx;j+=i+i) mark[j]=1;
    for(int i=0;i<mx;i++) if(!mark[i]) 
    {
        prime.push_back(i);
        // if(i<100)
        // cout<<i<<endl;

    }
}
bool cmp(pair<int,int> a,pair<int,int> b)
{
    if(a.second==b.second)
    {
        return a.first<b.first;
    }
    return a.second<b.second;
}
void segmented_seive(int l,int r)
{
    bool tmp_mark[r-l+1]={false};
    vector <pair<int,int>> distance;
    
    for(int i=0;prime[i]*prime[i]<=r;i++)
    {
        //cout<<"tst 1"<<endl;
        int tmp=(l/prime[i])*prime[i];
        tmp=(tmp<l)? tmp+prime[i]:tmp;
        int indx=tmp-l;
        if(tmp_mark[indx]==0)
        {
            if(tmp==prime[i])
            {
                indx+=prime[i];
            }
            for(int j=indx;j<=r;j+=prime[i])
            {
            
                //cout<<j+l<<" tst 2"<<endl;
                tmp_mark[j]=1;
            }
        }
        
    }
    
    int tmp;
    int cnt=0;
    for(int i=0;i<r-l+1;i++)
    {
        //cout<<"tst 3"<<endl;
        if(!tmp_mark[i])
        {
            cout<<i+l<<endl;
            cnt++;
            if(cnt==2)
            {
                distance.push_back(make_pair(l+tmp,i-tmp));
                cnt=1;
            }
            tmp=i;
        }
    }
    sort(distance.begin(),distance.end(),cmp);
    for(int i=0;i<distance.size();i++)
    {
        cout<<distance[i].first<<" "<<distance[i].second<<endl;
    }
    if(distance.size())
    {
        int dl=distance.size()-1;
        int i=distance.size()-1;
        while(i-1>=0 && distance[i].second==distance[i-1].second)
        {
            //cout<<"tst 4"<<endl;
            i--;
        }
        dl=i;

        printf("%d,%d are closest, %d,%d are most distant.\n",distance[0].first,distance[0].first+distance[0].second,distance[dl].first,distance[dl].first+distance[dl].second);
    }
    else
        printf("There are no adjacent primes.\n");

}
int main(){
    seive();
    int l,r;
    while(cin>>l>>r)
    {
        segmented_seive(l,r);
    }
    return 0;
}