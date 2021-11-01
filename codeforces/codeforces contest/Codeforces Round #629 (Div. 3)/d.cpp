#include <bits/stdc++.h>
#define ll long long
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
#define us unsigned short int
using namespace std;


int main(){
	//fin,fout;
    int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	cin>>n;
    	int k;
    	int a[n];
    	int same_pair=-1;
    	cin>>a[0];
    	int same_cnt=0;
    	for(int i=1;i<n;i++)
    	{
    		cin>>a[i];
    		if(a[i]==a[i-1])
    		{
    			same_pair=i;
    			same_cnt++;
    		}
    	}
    	if(a[0]==a[n-1]) same_pair=n-1;
    	int res[n];
    	int cnt=0;
    	if(same_cnt==n-1)
    	{
    		for(int i=0;i<n;i++)
    			res[i]=0;
    		k=1;
    	}
    	else if(n%2==0)
    	{
    		for(int i=0;i<n;i++)
    		{
    			res[i]=cnt%2;
    			cnt++;
    		}
    		k=2;
    	}
    	else
    	{
    		if(same_pair==-1)
    		{
    			for(int i=0;i<n;i++)
    			{
    				res[i]=cnt%2;
    				cnt++;
    			}
    			res[n-1]=2;
    			k=3;
    		}
    		else
    		{
    			if(a[0]==a[n-1])
    			{
    				for(int i=0;i<n-1;i++)
    				{
    				res[i]=cnt%2;
    				cnt++;
    				}
    				res[n-1]=res[0];
    				k=2;
    			}
    			else
    			{
    				for(int i=0;i<n;i++)
    				{
    				res[i]=cnt%2;
    				if(same_pair-1!=i)
    				cnt++;
    				}
    				k=2;
    			}

    		}
    	}
    	cout<<k<<endl;
    	for(int i=0;i<n;i++)
    		cout<<res[i]+1<<" ";
    	cout<<endl;


    }
    return 0;
}