 #include <bits/stdc++.h>
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


using namespace std;

int main() {
    set <string> st;
    // freopen("/home/imtiaz/Desktop/Dev skill contest 1/in.txt", "r", stdin);
    // freopen("/home/imtiaz/Desktop/Dev skill contest 1/out.txt", "w", stdout);
    std::string str;
    char ch[100];
    std::regex reg(R"([.,\/#!$%\^&\*;"":{}=\-_`~()'])");
    
    while(scanf("%s",ch)!=EOF)
    {

        // Store char sequence
        str=ch;
        // Remove punctation
        str = regex_replace(str, reg, "");

        //std::cout<<str<<std::endl;
        transform(str.begin(),str.end(),str.begin(),::tolower);
        st.insert(str);
        
    }
    for (auto i = st.begin(); i !=st.end(); i++)
    {
        cout<<*i<<endl;
    }
    
}