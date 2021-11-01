#include <bits/stdc++.h>
#define ll long long
#define us unsigned short int
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;


int main(){
    //fin,fout;
    int t;
    cin>>t;
    while (t--)
    {
        int n,a,b;
        cin>>n>>a>>b;
        string s="";
        char ch='a'-1;
        int cnt=0;
        for(int loop=0;loop<a;loop++)
        {
            if(cnt==b)
            s+=ch;
            else
            {
                if (ch == 'z')
                    ch = 'a'-1;
                ch++;
                s+=ch;
                cnt++;
            }
            
        }
        //cout<<s<<endl;
        for (int i = 1; i < n-a+1; i++)
        {
            cnt=0;;
            for (int j = i; j <i+a-1 ; j++)
            {
                if(s[j]!=s[j+1])
                cnt++;
            }

           if(cnt==b)
           {
               s+=ch;
           }
           else
           {
               if(ch=='z') ch='a'-1;
               ch++;
               s+=ch;
           }
           
        }
        cout<<s<<endl;
        
    }
    
    return 0;
}