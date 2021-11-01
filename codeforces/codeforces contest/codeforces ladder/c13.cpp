#include <bits/stdc++.h>
#define ll long long
#define us unsigned short int
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;
map<string, int> rem;
bool cmp(string str1,string str2)
{
    
        if(str1.size()>str2.size()) swap(str1,str2);
        int j=str2.size()-1;
        for (int i = str1.size()-1; i >= 0; i--)
        {
            if(str1[i]!=str2[j--])
             return false;
        }
        //cout<<"Same"<<endl;
       // rem[str1]=1;
       return true;
}

int main(){
    int n;
    cin>>n;
    map<string,int> mp;
    vector <string> a[n+1];
    int dis=0;
    for (int i = 0; i < n; i++)
    {
        string s;
        int m;
        cin>>s>>m;
        if (mp[s] == 0)
        {
            dis++;
            mp[s] = dis;
        }
        for (int j = 0; j < m; j++)
        {
            string phno;
            cin>>phno;
            a[mp[s]].push_back(phno);
        }
    }

   
    for (int i = 1; i <= dis; i++)
    {
        sort(a[i].begin(),a[i].end());
        auto it=unique(a[i].begin(),a[i].begin()+(int)a[i].size());
        a[i].resize(distance(a[i].begin(),it));
        for (int j = 0; j< a[i].size()-1 ; j++)
        {
            for (int k = j+1; k < a[i].size(); k++)
            {
              if(cmp(a[i][j],a[i][k]))
                {
                    if(a[i][j].size()<a[i][k].size())
                    {
                        a[i][j]="-";
                       // rem[a[i][j]]=1;
                    }
                    else
                    {
                       a[i][k]="-";
                       //rem[a[i][k]]=1;
                    } 
                }
            } 
        }
    }
    
    cout<<dis<<endl;
    for (auto i=mp.begin(); i != mp.end(); i++)
    {
        int cnt = 0;
        cout<<i->first<<" ";
        for (int j = 0; j < a[i->second].size(); j++)
        {
            if(a[i->second][j]!="-") cnt++;
        }
        cout<<cnt<<" ";
        for (int j = 0; j < a[i->second].size(); j++)
        {
            if(a[i->second][j]=="-") continue;
            cout<<a[i->second][j]<<" ";
        }
        cout<<endl;
        
    }
    
    
    
    return 0;
}

// #include <bits/stdc++.h>
// #define ll long long
// #define us unsigned short int
// #define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
// #define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
// #define dbg(x) cerr << #x << ": " << x << endl
// #define fastio ios::sync_with_stdio (false); cin.tie (0);
// using namespace std;


// int main(){
//     string s1="88017";
//     string s2="016";
//     cmp(s1,s2);
//     return 0;
// }