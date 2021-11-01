#include <bits/stdc++.h>
using namespace std;


int main(){
    int size;
    cin>>size;
    string s;
    cin>>s;
    int z,e,r,o,n;
    z=e=r=o=n=0;

    for (int i = 0; i < size; i++)
    {
        if(s[i]=='z') z++;
        else if(s[i]=='e') e++;
        else if(s[i]=='r') r++;
        else if(s[i]=='o') o++;
        else  n++;
    }

    int one=min(o,min(n,e));
    o-=one;
    e-=one;
    int zero=min(min(z,e),min(r,o));
   
    while (one--)
    {
        cout<<1<<" ";
    }
    while (zero--)
    {
        cout<<0<<" ";
    }
    cout<<endl;
    
    return 0;
}




