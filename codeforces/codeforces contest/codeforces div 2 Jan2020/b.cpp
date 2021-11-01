#include <bits/stdc++.h>
using namespace std;


int main(){
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    int n;

   cin>>n;
    double ans=0.0;
    for (int i = n; i>= 1; i--)
    {
        ans+=(double)(1.0/(double)i);
    }
    printf("%0.12lf\n",ans);
    
    return 0;
}