 //#include <bits/stdc++.h>
// using namespace std;


// int main(){
//     freopen("/home/imtiaz/Desktop/Dev skill contest 1/in.txt", "r", stdin);
//     freopen("/home/imtiaz/Desktop/Dev skill contest 1/out.txt", "w", stdout);
//    string str;
//    char ch[100];
//    while(scanf("%s[a-z | A-Z  ^.]",ch)!=EOF) 
//    {
//         str=ch;
//         cout<<str<<endl;
//    }
   
//     return 0;
// }


// using namespace std;

// int main() {
//     set <string> st;
//     freopen("/home/imtiaz/Desktop/Dev skill contest 1/in.txt", "r", stdin);
//     freopen("/home/imtiaz/Desktop/Dev skill contest 1/out.txt", "w", stdout);
//     std::string str;
//     char ch[100];
//     std::regex reg(R"([""?.,\/#!$%\^&\*;:{}=\-_`~()'])");

    
//     while(scanf("%s",ch)!=EOF)
//     {

//         // Store char sequence
//         str=ch;
//         // Remove punctation
//         str = regex_replace(str, reg, "");

//         //std::cout<<str<<std::endl;
//         transform(str.begin(),str.end(),str.begin(),::tolower);
//         st.insert(str);
        
//     }
//     for (auto i = st.begin(); i !=st.end(); i++)
//     {
//         cout<<*i<<endl;
//     }
    
// }

#include <bits/stdc++.h>
using namespace std;


int main(){
    // freopen("/home/imtiaz/Desktop/Dev skill contest 1/in.txt", "r", stdin);
    // freopen("/home/imtiaz/Desktop/Dev skill contest 1/out.txt", "w", stdout);
    string sline;
    set<string> str_set;
    //char ch[100];
    string sword;
    while (getline(cin,sline))
    {
       //cout<<sline<<endl;
        sline.push_back('.');
        for (auto i = sline.begin(); i !=sline.end(); i++)
        {
            int f=0;
            
            if(((*i>='a'&& *i<='z')||(*i>='A'&& *i<='Z')))
            {
                sword.push_back(*i);
                f=1;
            }
            
            if(!f)
            {
                //cout<<sword<<endl;
                if(sword.size())
                {
                     transform(sword.begin(),sword.end(),sword.begin(),::tolower);
                    str_set.insert(sword);
                   
                }
                 sword.clear();
            }
        }
        
   }
     
    for (set<string> ::iterator it = str_set.begin();it!=str_set.end(); it++)
    {
       // if(it!=str_set.begin())
        //cout<<endl;
         cout<<*it<<endl;
    }
    
    
    return 0;
}