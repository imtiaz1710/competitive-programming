#include <bits/stdc++.h>
using namespace std;


int main(){
    int n,c,m;
    int t;
    cin>>t;
    while (t--)
    {
        cin>>n>>c>>m;
        int wrapper=n/c;
        int total=wrapper;
        int carry;
        while (wrapper>=m)
        {
            carry=wrapper%m;
            total=total+(wrapper/m);
            wrapper=wrapper/m+carry;
            
            
        }
        cout<<total<<endl;
        
    }
    
    return 0;
}