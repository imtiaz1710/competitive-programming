#include <bits/stdc++.h>
#define ll long long
#define fin freopen("in.txt", "r", stdin)
#define fout freopen("out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
#define mx (int)1e6
using namespace std;
bool mark[mx];
vector <int> prime;
vector<int> value;

void seive()
{
    mark[0]=mark[1]=1;
    for(int i=4;i<mx;i+=2) mark[i]=1;
    int sq=sqrt(mx);
    for(int i=3;i*i<= mx;i+=2)
        for(int j=i*i;j<mx;j+=i+i)
            mark[j]=1;
    for(int i=0;i<mx;i++)
        if(!mark[i]) prime.push_back(i);
}


int divisor_finder()
{
    vector <int> dif;
    sort(value.begin(),value.end());
    for(int i=0;i<value.size()-1;i++)
    {
        dif.push_back(value[i+1]-value[i]);
    }
    int limit=sqrt(dif[0])+1;
    
    int res=1;
    sort(dif.begin(),dif.end());
    //for(int i=0;i<dif.size();i++) cout<<dif[i]<<endl;
    for(int i=0;prime[i]<=limit && i<prime.size();i++)
    { 
        //cout<<"somossa3"<<endl;
        while(dif[0]%prime[i]==0)
        {
            //cout<<"somossa4"<<endl;
            bool is_not_common=0;
            for(int j=0;j<dif.size();j++)
            {
               // cout<<"somossa5"<<endl;
                if(dif[j]%prime[i]!=0)
                {
                    is_not_common=1;
                }
                else dif[j]=dif[j]/prime[i];
            }
            if(!is_not_common) res*=prime[i];
        }
    }
    //cout<<dif[0]<<endl;
     
    if(dif[0]>1) 
    {
        int tmp=dif[0];
        bool is_not_common=0;
        for(int j=0;j<dif.size();j++)
        {
            // cout<<"somossa5"<<endl;
            if(dif[j]%dif[0]!=0)
            {
                is_not_common=1;
            }
            else dif[j]=dif[j]/dif[0];
        }
        if(!is_not_common) res*=tmp;
    }
    return res;
}



int main(){
    seive();
    int start;
    while (cin>>start,start)
    {
       // cout<<"somossa1"<<endl;
        value.push_back(start);
        int val;
        while(cin>>val,val)
        {
            //cout<<"somossa2"<<endl;
            value.push_back(val);
        }
        cout<<divisor_finder()<<endl;
        value.clear();
    }
    return 0;
}