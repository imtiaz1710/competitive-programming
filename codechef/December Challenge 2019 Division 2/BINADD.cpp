#include <bits/stdc++.h>
using namespace std;
int size=0;
int fun(int a[],int b[])
{
    int ans=0;
    int cnt=0;
    bool f=0;
    
    for (int i = 0; i < size; i++)
    {
        if (a[i]==1 && b[i]==1)
        {
            if(f) cnt++;
             else f=1;
            ans=max(ans,cnt);
            cnt=1;
        }
        if (f && ((a[i]==0 && b[i]==1)||(a[i]==1 && b[i]==0)))
        {
            cnt++;
        }
        if(a[i]==0 && b[i]==0 &&f)
        {
            cnt++;
            ans=max(ans,cnt);
            cnt=0;
            f=0;
        }
        
        
       
    }
    if(ans==0) return 1;
    return ans;
    
}


int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        string s1,s2;
        cin>>s1>>s2;
        size=(s1.size()>s2.size())?s1.size():s2.size();
        size+=1;
        int a[size]={0};
        int b[size]={0};
        
        bool zfa=0; //zero flag a
        bool zfb=0;
        for (int i =s1.size()-1,j=0 ; i >=0; i--)
        {
             a[j++]=s1[i]-'0';
             if(s1[i]=='1') zfa=1;
        }
           

        for (int i =s2.size()-1,j=0; i>=0 ; i--)
        {
             b[j++]=s2[i]-'0';
             if(s2[i]=='1') zfb=1;
        }
        if (zfb==0)
        {
            cout<<0<<endl;
            continue;
        }
        if(zfa==0) 
        {
            cout<<1<<endl;
            continue;
        }
        
        
        cout<<fun(a,b)<<endl;
        
    }
    
}