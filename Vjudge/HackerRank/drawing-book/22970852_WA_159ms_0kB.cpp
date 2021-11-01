#include <bits/stdc++.h>
using namespace std;


int main(){
    int n,p;
    cin>>n>>p;
    int pageno=1;
    int frontcount=0;
    int backcount=0;
    if(p==pageno || p==n || p==n-1)
    {
        cout<<0<<endl;
        return 0;
    }
    while (pageno<=p)
    {
        pageno+=2;
        frontcount++;
        if(p==pageno || p==pageno-1)
        {
            break;
        }
    }
    pageno=n-1;
    while (pageno>=p)
    {
       pageno-=2;
       backcount++;
       if(p==pageno || p==pageno+1) break;
    }
    if(frontcount<backcount) cout<<frontcount<<endl;
    else
    {
        cout<<backcount<<endl;
    }
    
    
    
    
    return 0;
}