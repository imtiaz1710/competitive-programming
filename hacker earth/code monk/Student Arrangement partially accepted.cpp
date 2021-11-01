#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,k,cnt=0,value;
    vector <int> a;
    cin>>n>>m>>k;
    
    int b[m]={0};
    

    for (int  i = 0; i < n; i++)
    {
        cin>>value;
        a.push_back(value);

        if (b[a[i]-1]<k)
        {
            b[a[i]-1]++;
        }
        else
        {
            int f=0;
            int j=1;
            while (a[i]+j<=m && f==0)
            {
                if(b[a[i]-1+j]<k)
                {
                    b[a[i]-1+j]++;
                    cnt++;
                    f=1;
                }
                else
                {
                    j++;
                }
                
            }
            j=0;
            
            while (f==0 && j<a[i]-1)
            {
                if(b[j]<k)
                {
                    b[j]++;
                    cnt++;
                    f=1;
                }
                else
                {
                    j++;
                }
                
            }

            if (f==0)
            {
                cnt++;
            }
            

            
            
            
        }
        
        
    }
    cout<<cnt<<endl;
    
    
}
