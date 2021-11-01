#include <bits/stdc++.h>
#define ll long long
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;


int main()
{
   // fin,fout;
char ch;
vector <char> digits;
   while (cin>>ch)
   {
       if(ch!='+')
        digits.push_back(ch);
   }
   sort(digits.begin(),digits.end());
   for (int i = 0; i < digits.size(); i++)
   {
       cout<<digits[i];
       if(i!=digits.size()-1)
       cout<<'+';
   }
   cout<<endl;
   
   
}