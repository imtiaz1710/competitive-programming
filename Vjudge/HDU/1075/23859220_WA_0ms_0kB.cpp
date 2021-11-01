#include <bits/stdc++.h>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    map<string,string> m;
    
    freopen("/home/imtiaz/Desktop/Dev skill contest 1/in.txt", "r", stdin);
    freopen("/home/imtiaz/Desktop/Dev skill contest 1/out.txt", "w", stdout);
   // char char_str1[40000];
    //char char_str2[40000];
    string str1,str2;
    cin>>str1;
        while (1)
        {
            cin>>str1;
            if(str1=="END")
            break;
            cin>>str2;
            m[str2]=str1;
        }
        cin>>str1;
        getline(cin,str1);
        while (1)
        { 
            getline(cin,str1);
            if(str1=="END") break;
            str1.push_back('.');
            string tmp="";
            for (int i = 0; i < str1.size(); i++)
            {
                int f=0;
                if((str1[i]>='a'&& str1[i]<='z'))
                {
                    
                    f=1;
                    tmp.push_back(str1[i]);
                }
                if(f==0)
                {
                    if(m[tmp]=="")
                    cout<<tmp;
                    else
                    {
                        cout<<m[tmp];
                    }
                    
                    if(i!=str1.size()-1)
                    cout<<str1[i];
                    tmp.clear();

                }
            }
            cout<<"\n";
            
        }
        
        return 0;
}