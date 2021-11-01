#include <bits/stdc++.h>
#define ll long long
#define fin freopen("in.txt", "r", stdin)
#define fout freopen("out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;
bool cmp(char a,char b)
{
    return a>b;
}

int main(){
    string s;
    while(cin>>s)
    {

        string str1(s);
        string str2(s);
        sort(str1.begin(),str1.end());
        sort(str2.begin(),str2.end(),cmp);
        int i=0;
        while(str1[i]=='0') i++;
        if(i!=0) swap(str1[i],str1[0]);
        stringstream ss1(str1);
        ll lower;
        ss1>>lower;
        stringstream ss2(str2);
        ll upper;
        ss2>>upper;
        printf("%lld - %lld = %lld = 9 * %lld\n",upper,lower,upper-lower,(upper-lower)/9);
    }
    return 0;
}