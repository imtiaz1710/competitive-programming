#include <bits/stdc++.h>
#define ll long long
#define us unsigned short int
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;
vector <string> str;
string s;
bool mark[1000][1000];
void substr(int i,int j)
{
    string tmp = "";
    if(mark[i][j]) return;
    mark[i][j] = 1;
    if(i==j){
        tmp+=s[i];
        str.push_back(tmp);
        return;
    }
   
    for(int loop=i;loop<=j;loop++)
    {
        tmp+=s[loop];
    }
    substr(i+1,j);
    substr(i,j-1);
    
    str.push_back(tmp);
}
int main(){
    
    cin>>s;
    substr(0,s.size()-1);
    for(string x:str)
    cout<<x<<endl;
    return 0;
}