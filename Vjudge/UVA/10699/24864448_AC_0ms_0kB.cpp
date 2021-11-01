#include <bits/stdc++.h>
#define ll long long
#define fin freopen("/home/imtiaz/Desktop/dev skill contest 4/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/dev skill contest 4/out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
#define mx (int)1e4
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
        if(mark[i]==0) prime.push_back(i);
}
int num_of_pf(int n)
{
    int sq=sqrt(n)+1;
    int cnt=0;
    for(int i=0;prime[i]<=sq && i<prime.size();i++)
    {
        bool is_div=0;
        
        while (n%prime[i]==0)
        {
            n=n/prime[i];
            is_div=1;
        }
        if(is_div) cnt++;
        if(n==1) break;
    }
    if(n>1) cnt++;

    return cnt;
}

int main(){
    //fin,fout;
    seive();
    int n;
    while (cin>>n,n)
    {
        printf("%d : %d\n",n,num_of_pf(n));
    }
    return 0;
}