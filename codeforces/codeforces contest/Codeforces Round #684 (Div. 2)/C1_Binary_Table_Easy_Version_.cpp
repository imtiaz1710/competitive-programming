#include <bits/stdc++.h>
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);

#define ll long long
#define US unsigned short int
#define MP make_pair
#define FF first
#define SS second
#define MOD (1000000000+7)
#define M_PI 3.14159265358979323846
#define PLL pair<ll,ll>

#define PB push_back
#define LN cout<<"\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
#define IN(x) cin>>x
#define INN(x,y) cin>>x>>y
#define INNN(x,y,z) cin>>x>>y>>z
#define INNNN(x,y,z,zz) cin>>x>>y>>z>>zz
#define OU(y) cout<<y<<" "
#define OUT(x) cout<<x<<"\n"
#define OUTT(x,y) cout<<x<<" "<<y<<"\n" 
#define OUTTT(x,y,z) cout<<x<<" "<<y<<" "<<z<<"\n" 
#define OUTTTT(x,y,z,zz) cout<<x<<" "<<y<<" "<<z<<" "<<zz<<"\n" 

#define min3(a,b,c)     min(a,min(b,c))
#define max3(a,b,c)     max(a,max(b,c))
#define min4(a,b,c,d)   min(a,min(b,min(c,d)))
#define max4(a,b,c,d)   max(a,max(b,max(c,d)))

#define FOR(i,a,b)      for(auto i=a;i<=b;i++)
#define ROF(i,a,b)      for(auto i=a;i>=b;i--)
#define REP(i,b)        for(auto i=0;i<b;i++)
#define MEM(a,x)        memset(a,x,sizeof(a))
#define ABS(x)          ((x)<0?-(x):(x))
#define SORT(v)         sort(v.begin(),v.end())
#define RSORT(v)         sort(v.rbegin(),v.rend())
#define REV(v)          reverse(v.begin(),v.end())
#define AI(v,n)           for(ll i=0;i<n;i++) cin>>v[i]
#define AO(v,n)           for(ll i=0;i<n;i++) cout<<v[i]<<" "

using namespace std;

ll dr[]={-1, 1, 0, 0, -1, 1, -1, 1};
ll dc[]={0, 0, -1, 1, -1, -1, 1, 1};


int main(){
    
    ll T;
    cin>>T;
    while(T--){
        ll n,m;
        INN(n,m);
        ll a[n][m];
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < m; j++)
            {
                char ch;
                cin>>ch;
                a[i][j]=ch-'0';
            }
            
        } 
        
        vector <PLL> res;
        for (ll i = 0; i < n; i++)
        {
           
            for (ll j = 0; j < m; j++)
            {
                
                if(i+1<n and j+1<m)
                {
                    ll z=0,one,zero;
                    if(a[i][j]==0) z++;
                    if(a[i][j+1]==0) z++;
                    if(a[i+1][j]==0) z++;
                    if(a[i+1][j+1]==0) z++;
                    while (z!=4)
                    {
                         //OUT("OK");
                         ll op=0;
                        if(z==0 or z==1)
                        {
                            one=3;
                            if(a[i][j]==1 and one) {  op++;
                                a[i][j]=0;
                                res.push_back({i+1,j+1});
                                one--;
                            }
                            if(a[i][j+1]==1 and one) { op++;
                                a[i][j+1]=0;
                                res.push_back({i+1,j+2});
                                one--;
                            }
                            if(a[i+1][j]==1 and one) { op++;
                                a[i+1][j]=0;
                                res.push_back({i+2,j+1});
                                one--;
                            }
                            if(a[i+1][j+1]==1 and one) {op++;
                                a[i+1][j+1]=0;
                                res.push_back({i+2,j+2});
                                one--;
                            }
                           // OUTT(op,1);
                        }

                        if(z==2 or z==3)
                        {
                            one=1;
                            zero=2;
                           
                            if(a[i][j]==0 and zero) {  op++;
                                a[i][j]=1;
                                res.push_back({i+1,j+1});
                                zero--;
                            }
                            else 
                            {
                                if(one)
                                {  op++;
                                    a[i][j]=0;
                                    res.push_back({i+1,j+1});
                                    one--;
                                }
                            }
                            
                            if(a[i][j+1]==0 and zero ) {  op++;
                                a[i][j+1]=1;
                                res.push_back({i+1,j+2});
                                zero--;
                            }
                            else
                            {
                                if(one)
                                {  op++;
                                    a[i][j+1]=0;
                                    res.push_back({i+1,j+2});
                                    one--;
                                }
                            }

                            if(a[i+1][j]==0 and zero) {  op++;
                                a[i+1][j]=1;
                                res.push_back({i+2,j+1});
                                zero--;
                            }
                            else
                            {
                                if(one)
                                {  op++;
                                    a[i+1][j]=0;
                                    res.push_back({i+2,j+1});
                                    one--;
                                }
                            }
                            
                            if(a[i+1][j+1]==0 and zero) {  op++;
                                a[i+1][j+1]=1;
                                res.push_back({i+2,j+2});
                                zero--;
                            }
                            else
                            {
                                if(one)
                                {  op++;
                                    a[i+1][j+1]=0;
                                    res.push_back({i+2,j+2});
                                    one--;
                                }
                            }
                            //OUTT(op,2);
                        }
                        BLK:
                        z=0;
                        if(a[i][j]==0) z++;
                        if(a[i][j+1]==0) z++;
                        if(a[i+1][j]==0) z++;
                        if(a[i+1][j+1]==0) z++;
                        
                    }
                        
                        
                }
            }
                
        }
        OUT((ll)res.size()/3);
        for (ll i = 0; i < res.size(); i+=3)
        {
           cout<<res[i].FF <<" "<< res[i].SS<<" ";
           cout<<res[i+1].FF <<" "<< res[i+1].SS<<" ";
           cout<<res[i+2].FF <<" "<< res[i+2].SS<<" ";
           LN;
        }
        //  for (ll i = 0; i < n; i++)
        // {
        //     for (ll j = 0; j < m; j++)
        //     {
        //         cout<<a[i][j];
        //     }
        //     LN;
        // } 
        // LN;
    }
    return 0;
}