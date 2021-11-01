#include <bits/stdc++.h>
using namespace std;


int main(){
    //freopen("in.txt", "r", stdin);
   // freopen("out.txt", "w", stdout);
    int t;
    cin>>t;
    
    int sum=0;
    int amount;
    while (t--)
    {
        string s;
        cin>>s;
        if(s=="donate")
        {
            cin>>amount;
            sum+=amount;
        }
        else
        cout<<sum<<endl;
    }
    
    return 0;
}