#include <bits/stdc++.h>
#define ll long long
#define us unsigned short int
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;


int main(){
   // fin;
    int t;
    cin>>t;
    while (t--)
    {
        list <int> li;
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            int tmp;
            cin>>tmp;
            li.push_back(tmp);
        }
        int move=0;
        bool a=0;
        bool b=1;
        int prev=0;
        int bob=0;
        int alice=0;
        while (!li.empty())
        {
            move++;
            if(a)
            {
                int sum=0;
                while (!li.empty() and sum+li.back()<= prev)
                {
                   sum+=li.back();
                   li.pop_back();
                }
                if(li.empty()) {
                    bob+=sum;
                    break;
                }
                sum+=li.back();
                li.pop_back();
                bob+=sum;
                prev=sum;
                b=1;
                a=0;
            }
            else
            {
                int sum = 0;
                while (!li.empty() and sum + li.front() <= prev)
                {
                    sum += li.front();
                    li.pop_front();
                }
                if(li.empty()) {
                    alice+=sum;
                    break;
                }
                sum += li.front();
                li.pop_front();
                alice += sum;
                //cout<<sum<<endl;
                prev=sum;
                a=1;
                b=0;
            }
            
            
        }
       
        cout<<move<<" "<<alice<<" "<<bob<<endl;
        
    }
    
    return 0;
}