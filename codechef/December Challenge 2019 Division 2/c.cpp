//unsolve
//unknon reason

#include <bits/stdc++.h>
using namespace std;


int main(){
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        char str[n];
        for (int i = 0; i <n; i++)
        {
            cin>>str[i];
        }
        int res=0;
        for (int i = 0; i < n-1; i++)
        {
            for (int j = i+1; j < n; j++)
            {
                if(str[i]==str[j])
                {
                    int k=1;
                    while (str[i+k]==str[j+k] && i+k<n && j+k<n) k++;
                    if(res<k)  res=k;
                    
                }
            }
            
        }
        cout<<res<<endl;
  
    }
    
    return 0;
}