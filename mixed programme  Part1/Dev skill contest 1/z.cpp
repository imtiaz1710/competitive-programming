#include <bits/stdc++.h>
using namespace std;
map<char,char> m{{'A','A'},{'B','O'},{'C','O'},{'D','O'},{'E','3'},{'F','O'},{'G','O'},{'H','H'},{'I','I'},{'J','L'},{'K','O'},{'L','J'},{'M','M'},{'N','O'},{'O','O'},{'P','O'},{'Q','O'},{'R','O'},{'S','2'},{'T','T'},{'U','U'},{'V','V'},{'W','W'},{'X','X'},{'Y','Y'},{'Z','5'},{'1','1'},{'2','S'},{'3','E'},{'4','O'},{'5','Z'},{'6','O'},{'7','O'},{'8','8'},{'9','O'}};

int main(){
    // freopen("/home/imtiaz/Desktop/Dev skill contest 1/in.txt", "r", stdin);
    // freopen("/home/imtiaz/Desktop/Dev skill contest 1/out.txt", "w", stdout);
    string s;
    while (cin>>s)
    {
        int palindrome=0;
        int reverse=0;
        string pal_str;
        string rev_str;
        for (int i = s.size()-1; i>=0; i--)
        {
            if(s[i]=='0') s[i]='o';
            pal_str.push_back(s[i]);
        }
        for (int i = s.size()-1; i>=0; i--)
        {
            if(s[i]=='0') s[i]='o';
            rev_str.push_back(m[s[i]]);
        }
       // cout<<rev_str<<endl;
        if(s==pal_str) palindrome=1;
        if(s==rev_str) reverse=1;

        if (palindrome==0 && reverse==0 )
        {
            cout<<s<<" -- is not a palindrome."<<endl<<endl;
            continue;
        }
        
        if (palindrome==1 && reverse==0 )
        {
            cout<<s<<" -- is a regular palindrome."<<endl<<endl;
            continue;
        }
        if (palindrome==1 && reverse==1)
        {
            cout<<s<<" -- is a mirrored palindrome."<<endl<<endl;
            
            continue;
        }
        if (palindrome==0 && reverse==1 )
        {
            cout<<s<<" -- is a mirrored string."<<endl<<endl;
            continue;
        }
    }
    
    return 0;
}