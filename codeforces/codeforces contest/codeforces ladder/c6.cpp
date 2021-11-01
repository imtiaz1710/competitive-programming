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
    int k;
    cin >> k;
    int cc = 0, sf = 0, lt = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '?')
            cc++;
        else if (s[i] == '*')
            sf++;
        else
            lt++;
    }
    if (lt < k)
    {
        if (sf)
        {
            int baki = k - lt;
            for (int i = 0; i < s.size(); i++)
            {
                if (s[i] == '*' or s[i] == '?')
                    continue;
                if (baki and i != (int)s.size() - 1 and s[i + 1] == '*')
                {
                    baki++;
                    while (baki--)
                    {
                        cout << s[i];
                    }
                    baki=0;
                }
                else
                    cout << s[i];
            }
            cout << endl;
        }
        else
        {
            cout << "Impossible" << endl;
        }
    }
    else
    {
        if (k < lt - (sf + cc))
        {
            cout << "Impossible" << endl;
        }
        else
        {
            int baki = lt - k;
            for (int i = 0; i < s.size(); i++)
            {
                if (s[i] == '*' or s[i] == '?')
                    continue;
                if (baki and i != (int)s.size() - 1 and (s[i + 1] == '*' or s[i + 1] == '?'))
                {
                    baki--;
                }
                else
                {
                    cout << s[i];
                }
            }
            cout << endl;
        }
    }
    // cout<<lt<<" "<<sf<<" "<<cc<<endl;
    // string s1="ccccbdosavqgwyejjxtlimfikmlibzkvwmujhohgchflndlqtbimgckpedioiqfnsjktzyqzihjptavrar";
    // cout<<s1.size()<<endl;
    return 0;
}