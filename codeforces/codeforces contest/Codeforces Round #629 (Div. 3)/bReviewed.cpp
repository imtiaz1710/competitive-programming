#include <bits/stdc++.h>
#define ll long long
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;


int main(){
	//fin,fout;
    int t;
    cin>>t;
 
    while(t--)
    {
    	int n,th;
    	cin>>n>>th;
    	string s;
    	s.assign(n,'a');
    	int first=n-2;
    	int second=n-1;
    	
    	int cnt=0;
    	while(1)
    	{
    		
    		second=n;

    		for (int i = first+1; i < n && cnt!=th; i++)
    		{
    			second--;
    			cnt++;
    		}

    		if(cnt==th) break;
    		first--;
    		
    	}
    		
    	s[first]='b';
    	s[second]='b';
    	cout<<s<<endl;
    }
    return 0;
}