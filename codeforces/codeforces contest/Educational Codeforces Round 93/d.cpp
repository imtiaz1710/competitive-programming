
//Idea from AST_Coder

#include <bits/stdc++.h>
#define ll long long 
using namespace std;


ll r, g, b;
ll x[207],y[207],z[207];
ll dp[201][201][201];
ll solv(ll i,ll j,ll k){
    if(!(i|j) || !(i|k) || !(j|k)) return 0;    
    if (dp[i][j][k])                   // wrote i,j,i. this line waste my 1 hour time
        return dp[i][j][k];
    ll val1=0,val2=0,val3=0;
    if(i && j) val1 =(x[i]*y[j])+solv(i-1,j-1,k);
    if(j && k) val2=(y[j]*z[k])+solv(i,j-1,k-1) ;
    if(i && k) val3=(z[k]*x[i])+solv(i-1,j,k-1) ;
    return dp[i][j][k]=max(val1,max(val2,val3));
}
int main(){

    cin>>r>>g>>b;
    for (ll i = 1; i <= r; i++)
    {
        cin>>x[i];
    }
    for (ll i = 1; i <= g; i++)
    {
        cin>>y[i];
    }
    for (ll i = 1; i <= b; i++)
    {
        cin>>z[i];
    }
    
    
    
    sort(x+1,x+r+1);
    sort(y+1,y+g+1);
    sort(z+1,z+b+1);
    ll ans=solv(r,g,b);
    cout<<ans<<endl;
    return 0;
}