#include <bits/stdc++.h>
using namespace std;


int main(){
    int n,b,h,w;
    while(cin>>n>>b>>h>>w)
    {
    int f2=0;
    int min=b;

    while(h--)
    {
        int p;
        cin>>p;
        int a[w];
        int f1=0;
        
        
        for(int i=0;i<w;i++)
        {
            cin>>a[i];
            if(a[i]>= n)
            f1=1;
        }
        if(f1==0) continue;
        int total=n*p;
        if(total>b) continue;
        if(min>total)
        {
            min=total; 
            f2=1;
        }  

    }
    if(!f2)
    cout<<"stay home"<<endl;
    else
    {
        cout<<min<<endl;
    }
    
    }
    
    return 0;
}