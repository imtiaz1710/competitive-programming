#include <bits/stdc++.h>
#define ll long long
#define us unsigned short int
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt", "w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
using namespace std;

int main()
{
    string s;
    cin >> s;
    map<char, int> m;
    int dis = 0;
    vector<char> unique;
    for (int i = 0; i < s.size(); i++)
    {
        if (m[s[i]] == 0)
        {
            dis++;
            unique.push_back(s[i]);
        }
        m[s[i]]++;
    }
    if(dis>4)
    {
        cout<<"no"<<endl;
    }
    else if(dis==4)
    {
        cout << "Yes" << endl;
    }
    else if (dis == 3)
    {
        if (m[unique[0]] >= 2 or m[unique[1]] >= 2 or m[unique[2]] >= 2)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    else if (dis == 2)
    {
        if (m[unique[0]] >=2  and m[unique[1]] >= 2)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}