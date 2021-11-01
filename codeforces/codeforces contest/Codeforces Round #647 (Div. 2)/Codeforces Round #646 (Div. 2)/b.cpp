#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        string s;
        cin>>s;
        int one,zero;
        one=zero=0;
        for (int i = 0; i < s.size(); i++)
        {
            if(s[i]=='1')
            {
                one++;
            } 
            if(s[i]=='0') 
            {
                zero++;
            }
        }
        int i=0;
        int res1=0;
        int tmp = 99999999;
        while (zero)
        {
            if(s[i]=='0')
            {
                zero--;
            }
            else
            {
                res1++;
            }
            tmp = min(tmp, res1 + zero);
            i++;
        }
        i=0;
        int res2=0;
        
        while (one)
        {
            if(s[i]=='1')
            {
                one--;
            }
            else
            {
                res2++;
            }
            tmp=min(tmp,res2+one);
            i++;
        }
        
        cout<<tmp<<endl;
    }
    
}