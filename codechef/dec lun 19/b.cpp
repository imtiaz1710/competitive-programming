//partially solved

#include <bits/stdc++.h>
using namespace std;


int main(){
   int t;
   cin>>t;
   while (t--)
   {
       int n;
       cin>>n;
       int a[n];
       for (int i = 0; i < n; i++)
       {
           cin>>a[i];
       }
       int cnt=0;
       int subs=n;
       int indx;


                   int *y;
                   y=min_element(a,a+n);
                   int telement=n;
                   subs=*y;
                   cnt+=telement*subs;
                   for (int j = 0; j < n; j++)
                   {
                      a[j]-=subs;
                   }
                   
       while (a[0]!=0)
       {
           
           for (int i = 0; i < n; i++)
           {
               if(a[i]==0)
               {
                   int *x;
                   x=min_element(a,a+i);
                   telement=i;
                   subs=*x;
                   cnt+=telement*subs;
                   for (int j = 0; j < i; j++)
                   {
                      a[j]-=subs;
                   }
                   break;
               }
                 
                
           }
           
       }
       cout<<cnt<<endl;
       
       
       
   }
   
    
    return 0;
}