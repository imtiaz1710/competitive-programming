#include <bits/stdc++.h>
using namespace std;


int main(){
   int t;
   cin>>t;
   while (t--)
   {
       int h;
       int m;
       cin>>h>>m;
       int total=(23-h)*60+(60-m);
       cout<<total<<endl;
   }
   
    return 0;
}