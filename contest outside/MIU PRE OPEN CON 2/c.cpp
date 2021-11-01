#include <bits/stdc++.h>
using namespace std;


int main(){
    string s;
    getline(cin,s);
    for (int i = 0; i < s.length(); i++)
    {
        s[i]=tolower(s[i]);
    }
    
    while (s!="done")
    {
        vector<char> ch1;
        for (int i = 0; i < s.length(); i++)
        {
            if((s[i]>='A' && s[i]<='Z')||(s[i]>='a'&& s[i]<='z'))
            {
                ch1.push_back(tolower(s[i]));
            }
        }
        vector <char> ch2;
        for (int i = ch1.size()-1; i >=0; i--)
        {
            ch2.push_back(ch1[i]);
        }
        bool f=0;
        for (int i = 0; i < ch1.size(); i++)
        {
            if(ch1[i]!=ch2[i]) 
            {
                f=1;
                break;
            }
        }
        if (f==0)
        {
                cout<<"You won’t be eaten!"<<endl;
        }
        else
        {
            cout<<"Uh oh.."<<endl;
        }
        
        
        
        
        
        getline(cin,s);
    }
    
    return 0;
}