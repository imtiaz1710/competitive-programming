#include <bits/stdc++.h>
#define ll long long
#define fin freopen("/home/imtiaz/Desktop/dev skill contest 4/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/dev skill contest 4/out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
#define mx (int)5e3
using namespace std;
bool mark[mx];
vector <int> prime;
vector<int> value;

void seive()
{
    mark[0]=mark[1]=1;
    for(int i=4;i<mx;i+=2) mark[i]=1;
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
    
    
    int res=1;
    sort(dif.begin(),dif.end());
    int limit=sqrt(dif[0])+1;
    for(int i=0;prime[i]<=limit && i<prime.size();i++)
    { 
        
        while(dif[0]%prime[i]==0)
        {
            
            bool is_not_common=0;
            for(int j=0;j<dif.size();j++)
            {
               
                if(dif[j]%prime[i]!=0)
                {
                    is_not_common=1;
                }
                else dif[j]=dif[j]/prime[i];
            }
            if(!is_not_common) res*=prime[i];
        }
        if(dif[0]==1) break;
    }
    
     
    if(dif[0]>1) 
    {
        int tmp=dif[0];
        bool is_not_common=0;
        for(int j=0;j<dif.size();j++)
        {
            
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
    //fin,fout;
    seive();
    int start;
    while (cin>>start,start)
    {
       
        value.push_back(start);
        int val;
        while(cin>>val,val)
        {
            
            value.push_back(val);
        }
        cout<<divisor_finder()<<endl;
        value.clear();
    }
    return 0;
}