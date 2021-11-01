#include <bits/stdc++.h>
using namespace std;


int main(){
    string s1,s2;
    cin>>s1>>s2;
    int s1size=s1.length();
    int s2size=s2.length();
    int size;
    size=(s1size>s2size)? s1size : s2size;
    
    int num1[size]={0};
    int num2[size]={0};
    int result[size*3]={0};
    int j=0;
    for(int i=s1size-1;i>=0;i--)
    {
        num1[j]=s1[i]-48;
        j++;
    }
    j=0;
    for (int i =s2size-1; i>=0; i--)
    {
        num2[j]=s2[i]-48;
        j++;
    }
    
    
    for (int i = 0; i < s2size; i++)
    {
        int k=i;
        int carry=0;
        int store=0;
        for (int l = 0; l < s1size; l++)
        {
            int tmp=num2[i]*num1[l]+carry+result[k];
            store=tmp%10;
            carry=tmp/10;
            result[k++]=store;
            
        }
        result[k]=carry;    
    }
    


    
    bool f=false;
    for (int k = size*3-1; k>=0; k-- )
    {
        if(result[k]!=0) f=true;
        if(f)
        cout<<result[k];
    }
    if(!f) cout<<0;
    cout<<endl;
    
    
    
    return 0;
}