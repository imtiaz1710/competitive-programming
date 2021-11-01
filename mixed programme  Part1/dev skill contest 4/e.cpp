#include <bits/stdc++.h>
#define ll long long
#define fin freopen("in.txt", "r", stdin)
#define fout freopen("out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
#define mx (int)1e6+7
using namespace std;
bool mark[mx+1];
vector <int> prime;
void prime_generator()
{
    mark[0]=mark[1]=mark[2]=1;

    for(int i=4;i<=mx;i+=2) mark[i]=1;

    for(int i=3;i*i<=mx;i+=2)
        for(int j=i*i;j<=mx;j+=i+i)
            mark[j]=1;
    
    for(int i=0;i<=mx;i++)
        if(!mark[i])
        prime.push_back(i);
}
int main(){
    prime_generator();
    int n;
    while (cin>>n,n)
    {
       for(int i=0;i<prime.size();i++) 
       {
           if(!mark[n-prime[i]])
           {
               printf("%d = %d + %d\n",n,prime[i],n-prime[i]);
                break;
           }
       }
    }
    return 0;
}