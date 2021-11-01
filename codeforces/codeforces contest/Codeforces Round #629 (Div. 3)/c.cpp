#include <bits/stdc++.h>
#define ll long long
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
#define us unsigned short int
using namespace std;
us fst[3]={0,1,1};
us snd[3]={0,0,1};
us ext1=0;
us ext2=2;


int main(){
	//fin,fout;
    us t;
    cin>>t;
   
    while(t--)
    {
    	us n;
    	cin>>n;
    	us a[n];
    	vector <us> ans1;
    	vector <us> ans2;
        us is_first=0;
    	for (us i = 0; i < n; i++)
    	{
            us tmp1,tmp2;
            scanf("%1hd",&a[i]);
            if(i==0)
            {
                tmp1=1;
                tmp2=1;

            }
            else if(a[i]>0 && is_first==0)
            {
                
                tmp1=fst[a[i]];
                tmp2=snd[a[i]];
                if(a[i]==1)
                    is_first=1;
            }
            else if(is_first==0 && a[i]==0){
                tmp1=0;
                tmp2=0;
            }
    		else if(is_first==1 )
            {
                if(a[i]!=2){
                    tmp1=snd[a[i]];
                    tmp2=fst[a[i]];
                }
                else
                {
                    tmp1=ext1;
                    tmp2=ext2;
                }
                
            }

    		ans1.push_back(tmp1);
            ans2.push_back(tmp2);
    	}

    	for(us tmp:ans1)
    	{
    		cout<<tmp;
    	}
    	cout<<endl;
    	for(us tmp:ans2){
    		cout<<tmp;
    	}
    	cout<<endl;
    }
    return 0;
}