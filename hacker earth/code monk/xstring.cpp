#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,mask1,mask2;
    string s1,s2;
    cin>>t;
    while(t--)
    {
        cin>>s1>>s2;
        a=(int)s1.size();
        b=(int)s2.size();
        mask1=0;
        mask2=0;
        for(int i=0;i<a;i++){
            mask1=mask1|(1<<(s1[i]-'a'));
        }
        for(int i=0;i<b;i++){
            mask2=mask2|(1<<(s2[i]-'a'));
        }
        for(int i='a';i<='z';i++)
        {
            if(mask1&(1<<(i-'a')))
               {
                   if(mask2&(1<<(i-'a')))
                    {
                        cout<<"Yes"<<endl;
                        goto abc;
                    }
               }
        }
        cout<<"No"<<endl;
        abc:{}
    }
}

