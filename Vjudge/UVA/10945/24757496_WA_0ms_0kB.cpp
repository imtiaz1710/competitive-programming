#include <bits/stdc++.h>
using namespace std;
int main()
{
    int fst=0;
    string s;

    while(1)
    {
        
        if(fst!=0)
        cout<<endl;
        getline(cin,s);
        if(s=="DONE")
        break;
        
        //if(fst) cout<<endl;
        transform(s.begin(),s.end(),s.begin(),::tolower);
        //cout<<s<<endl;
        string tmp1="";
        string tmp2="";
        for(int i=0;i<s.size();i++)
        {
            if((s[i]>='a' && s[i]<='z'))
            tmp1.push_back(s[i]);
        }
        for(int i=s.size()-1;i>=0;i--)
        {
            if((s[i]>='a' && s[i]<='z'))
            tmp2.push_back(s[i]);
        }
       //cout<<tmp1<<" "<<tmp2<<endl;
        if(tmp1==tmp2)
        cout<<"You won’t be eaten!";
        else
        cout<<"Uh oh..";
        fst=1;
    }
}
