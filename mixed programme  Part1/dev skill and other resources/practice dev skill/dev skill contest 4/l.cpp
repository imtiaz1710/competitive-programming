#include <bits/stdc++.h>
#define ll long long
#define fin freopen("in.txt", "r", stdin)
#define fout freopen("out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
#define mx (int)1e6+9
using namespace std;
bool mark[mx];
vector <int> prime;
void seive()
{
    mark[0]=mark[1]=1;
    for(int i=4;i<mx;i+=2) mark[i]=1;
    for(int i=3;i*i<=mx;i+=2)
        for(int j=i*i;j<mx;j+=i+i)
            mark[j]=1;

    for(int i=0;i<mx;i++) 
        if(mark[i]==0)
        {
            prime.push_back(i);
            // if(i<1100)
            // cout<<i<<endl;

        } 
}

int mu[mx];
int no_of_fac[mx];
int value[mx];
int m[mx];
void mertens()
{
    no_of_fac[1]=mu[1]=m[1]=1;

    int sq=sqrt(mx)+1;
    for(int i=2;i<mx;i++)
    {
        value[i]=i;
        for(int j=0;prime[j]<=sq && j<prime.size();j++)
        {
            if(value[i]%prime[j]==0)
            {
                value[i]=value[i]/prime[j];
                if(value[i]==1)
                {
                    no_of_fac[i]=1;
                }
                else
                {
                    if(m[value[i]] && value[i]%prime[j]!=0)
                    {
                        no_of_fac[i]=1+no_of_fac[value[i]];
                    }
                    else
                    {
                        no_of_fac[i]=0;
                    }
                    value[i]=1;
                    
                }
                break;
            }
        }
        if(value[i]>1) 
            no_of_fac[i]=1;
        if(no_of_fac[i]==0)
        {
            m[i]=0;
            mu[i]=mu[i-1]+m[i];
            
        }
        else
        {
            if(no_of_fac[i]%2==1)
                m[i]=-1;
            else 
                m[i]=1;
            mu[i]=mu[i-1]+m[i];
        }
    }
}
int main(){
    seive();
    mertens();
    int n;
    while (cin>>n,n)
    {
        printf("%8d%8d%8d\n",n,m[n],mu[n]);
    }
    return 0;
}