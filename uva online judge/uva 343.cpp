//accepted

#include <bits/stdc++.h>
using namespace std;
vector <int> num1;
vector <int> num2;
unsigned long long count1,count2;
int basenum1,basenum2;
void convert(string s1,string s2)
{
    basenum1=0;
    basenum2=0;
    
    for (int i = 0; i < s1.length(); i++)
    {
        
        if(s1[i]>='A' && s1[i]<='Z')
        {
            num1.push_back(s1[i]-55);
            basenum1=(basenum1>(s1[i]-55))?basenum1 : s1[i]-55;
        }
        else
        {
            num1.push_back(s1[i]-48);
            basenum1=(basenum1>(s1[i]-48))?basenum1 : s1[i]-48;
        }
    }

    for (int i = 0; i < s2.length(); i++)
    {
        if(s2[i]>='A' && s2[i]<='Z')
        {
            num2.push_back(s2[i]-55);
            basenum2=(basenum2>(s2[i]-55))?basenum2 : s2[i]-55;
        }
        else
        {
            num2.push_back(s2[i]-48);
            basenum2=(basenum2>(s2[i]-48))?basenum2 : s2[i]-48;
        }
    }
   
    
}


int main(){
    
     //freopen("in.txt","r",stdin);
    // freopen("ou.txt","w",stdout);
    string s1,s2;
    while (cin>>s1 && cin>>s2)
    {

        convert(s1,s2);
        if(basenum1==0 ) basenum1++;
        if(basenum2==0) basenum2++;
        if(s1==s2) 
        {
            cout<<s1<<" (base "<<basenum1+1<<") = "<<s2<<" (base "<<basenum2+1<<")"<<endl;
             num1.clear();
            num2.clear();
            continue;

        }
        
        bool f=false;
        int base1,base2;
        int res1,res2;
        //cout<<basenum1<<" "<<basenum2<<endl;
        for(base1=basenum1+1;base1<=36;base1++)
        {
            if(f) break;
            count1=0;
            
                int pos=0;
                int f1=0;
                for (int i = num1.size()-1; i>=0 ; i--)
                {
                    count1=count1+(num1[i]*pow(base1,pos));
                    pos++;
                    if(count1>0) f1=1;
                }
                if(f1==1 && count1==0) break;
                
                //cout<<"loop1:"<<count1<<" "<<base1<<endl;
                
            for (base2 = basenum2+1; base2 <= 36; base2++)
            {
                
                count2=0;
                 pos=0;
                for (int j = num2.size()-1; j>=0; j--)
                {
                    count2=count2+(num2[j]*pow(base2,pos));
                    pos++;
                }
                //cout<<"loop2:"<<count2<<" "<<base2<<endl;
                if(count2>count1) break;
                
                if(count2==count1)
                {
                    res1=base1;
                    res2=base2;
                    f=true;
                    break;
                }
                
            }
            
        }

        if(!f)
        {
            cout<<s1<<" is not equal to "<<s2<<" in any base 2..36";
        }
        else
        {
            cout<<s1<<" (base "<<res1<<") = "<<s2<<" (base "<<res2<<")";
        }
        cout<<endl;
        num1.clear();
        num2.clear();
        
    }
    
    return 0;
}