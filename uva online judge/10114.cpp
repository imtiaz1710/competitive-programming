#include <bits/stdc++.h>
using namespace std;


int main(){
    double downp,loan; 
    int m,dcount;//m-month,r-rate,tl-total ,d=depreciation
    cin>>m>>downp>>loan>>dcount;
    while(m>=0){
    
    double a[m]={0};
    for (int i = 0; i < dcount; i++)
    {
       int nm;
       double vd; //nm-number of month,vd-value of depre..
        cin>>nm>>vd;
        a[nm]=vd;
    }
    double cry;
    for (int i = 0; i <=m ; i++)
    {
         //cry-carry
        if(a[i]!=0.0)
        cry=a[i];
        if(a[i]==0.0)
        a[i]=cry;

        
    }
    double carval=(downp+loan)*(1-a[0]);
    double rate=loan/m;
    
    
    int k=0;
    double totalp=loan;
    while (carval<totalp)
    {
        k++;
        
        carval=carval*(1-a[k]);
        //cout<<"worthl: "<<worthl<<endl;
        totalp-=rate;
        //cout<<"pay: "<<pay<<endl;
    }
    
        
             
    
    
    
    if(k==1)
    cout<<1<<" month"<<endl;
    else
    {
        cout<<k<<" months"<<endl;
    }
    
    cin>>m>>downp>>loan>>dcount;
    }
    
    return 0;
}