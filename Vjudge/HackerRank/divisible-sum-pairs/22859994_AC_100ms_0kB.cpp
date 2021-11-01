#include <bits/stdc++.h>
using namespace std;


int main(){
    int n,k;
    cin>>n>>k;
    int a[n];
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j <n ; j++)
        {
            if((a[i]+a[j])%k==0) sum++;
        }   
    }
    cout<<sum<<endl;
    
    return 0;
}