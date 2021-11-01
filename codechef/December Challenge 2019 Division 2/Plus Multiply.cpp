#include <bits/stdc++.h>
using namespace std;


int main(){
    long long t;
    cin>>t;
    for (long long i = 0; i < t; i++)
    {
        long long n;
        cin>>n;
        long long a[n];
        long long cnt2=0;
        long long cnt0=0;
        for (long long i = 0; i < n; i++)
        {
            cin>>a[i];
            if(a[i]==2) cnt2++;
            if(a[i]==0) cnt0++;
        }
        long long res0=0;
        long long res2=0;
        if(cnt2>1) res2=(cnt2*(cnt2-1))/2;
        if(cnt0>1) res0=(cnt0*(cnt0-1))/2;
        cout<<res0+res2<<endl;
        
    }
    
    return 0;
}