//solved in cf a

#include <bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n,x,a,b;
        cin>>n>>x>>a>>b;
        if(x==0)
        {
            cout<<abs(a-b)<<endl;
            continue;
        }
        if(a>b)
        swap(a,b);
        while (a>1 && x!=0)
        {
            a--;
            x--;
        }
        while (b<n && x!=0)
        {
            b++;
            x--;
        }
        cout<<abs(a-b)<<endl;
        

    }
    
    return 0;
}