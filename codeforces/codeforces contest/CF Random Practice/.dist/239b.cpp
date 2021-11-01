#include <bits/stdc++.h>
#define mx 10000007
#define  ll long long
using namespace std;
bool mark[mx];
void prime()
{
   for (ll i = 4; i < mx; i+=2)
   { 
      mark[i]=1;
   }
   ll sq=sqrt(mx);
   for (ll i = 3; i <= sq; i+=2)
   {
      for (ll j = i*i; j < mx; j+=i*2)
      {
         mark[j]=1;
      } 
   }

} 

int main()
{
   prime();
   long long n;
   cin>>n;
   for(long long i=0;i<n;i++)
   {
      long long tmp;
      cin>>tmp;
      if(tmp==1){
          cout<<"NO"<<endl;
          continue;
      }
      long long sq=sqrt(tmp);
      if(sq*sq==tmp)
      {
         if(mark[sq]!=1)
            cout<<"YES"<<endl;
         else
         {
            cout<<"NO"<<endl;
         }
         
      }
      else cout<<"NO"<<endl;
   }
}

