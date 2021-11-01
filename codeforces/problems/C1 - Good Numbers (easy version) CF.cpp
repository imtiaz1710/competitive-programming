#include <bits/stdc++.h>
using namespace std;
int hightpow(int n)
{
    int tmp=1;
    int i;
    for (i=1;; i++)
    {
        tmp*=3;
        if(tmp>n) 
        {
            return i-1;
        }
        
    } 
   
}  
        
int goodint(int n)
{
    while (1)
    {
        if(n%3==0 || n%3==1)
        {
            
            int p=hightpow(n);
            int tmp=pow(3,p);
            
            while (p--)
            {
                int val=pow(3,p);
                tmp=tmp+val;
                if(tmp>n)
                tmp=tmp-val;
                if(tmp==n || tmp+1==n) 
                return n;
            }
            
        }

            n++;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int q;
    cin>>q;
    while (q--)
    {
        int n;
        int res;
        cin>>n;
        if(n==1 || n==2) 
        {
            res=(n==1)?n:n+1;
            cout<<res<<endl;
            continue;
        }
        res=goodint(n);
        cout<<res<<endl;

    }
    
    return 0;
}