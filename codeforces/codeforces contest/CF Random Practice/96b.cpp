// #include <bits/stdc++.h>
// #define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
// #define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
// #define dbg(x) cerr << #x << ": " << x << endl
// #define fastio ios::sync_with_stdio (false); cin.tie (0);

// #define ll long long
// #define US unsigned short int
// #define MP make_pair
// #define FF first
// #define SS second
// #define MOD (1000000000+7)
// #define M_PI 3.14159265358979323846
// #define PLL pair<ll,ll>

// #define PB push_back
// #define LN cout<<"\n"
// #define YES cout<<"YES\n"
// #define NO cout<<"NO\n"
// #define IN(x) cin>>x
// #define INN(x,y) cin>>x>>y
// #define INNN(x,y,z) cin>>x>>y>>z
// #define INNNN(x,y,z,zz) cin>>x>>y>>z>>zz
// #define OU(y) cout<<y<<" "
// #define OUT(x) cout<<x<<"\n"
// #define OUTT(x,y) cout<<x<<" "<<y<<"\n" 
// #define OUTTT(x,y,z) cout<<x<<" "<<y<<" "<<z<<"\n" 
// #define OUTTTT(x,y,z,zz) cout<<x<<" "<<y<<" "<<z<<" "<<zz<<"\n" 

// #define min3(a,b,c)     min(a,min(b,c))
// #define max3(a,b,c)     max(a,max(b,c))
// #define min4(a,b,c,d)   min(a,min(b,min(c,d)))
// #define max4(a,b,c,d)   max(a,max(b,max(c,d)))

// #define FOR(i,a,b)      for(auto i=a;i<=b;i++)
// #define ROF(i,a,b)      for(auto i=a;i>=b;i--)
// #define REP(i,b)        for(auto i=0;i<b;i++)
// #define MEM(a,x)        memset(a,x,sizeof(a))
// #define ABS(x)          ((x)<0?-(x):(x))
// #define SORT(v)         sort(v.begin(),v.end())
// #define RSORT(v)         sort(v.rbegin(),v.rend())
// #define REV(v)          reverse(v.begin(),v.end())
// #define AI(v,n)           for(ll i=0;i<n;i++) cin>>v[i]
// #define AO(v,n)           for(ll i=0;i<n;i++) cout<<v[i]<<" "

// using namespace std;

// ll dr[]={-1, 1, 0, 0, -1, 1, -1, 1};
// ll dc[]={0, 0, -1, 1, -1, -1, 1, 1};


// int main(){

//     string s;
//     IN(s);
//     ll sz=s.size();
//     if(sz%2==1)
//         s+='0';
//     bool f=0;
//     ll half=s.size()/2;
//     ll four=0,seven=0;
//     for (ll i = 0; i < s.size(); i++)
//     {
//         if(s[i]<='4' and four<half)
//         {
//             s[i]='4';
//             four++;
//         }
//         else if(s[i]<='7' and seven<half)
//         {
//             s[i]='7';
//             seven++;
//         }
//         else
//         {
//             f=1;
//             break;
//         }
//     }

//     if(f)
//     {
//         if(sz%2==0){
//             s+="00";
//         }
//         for (ll i = 1; i <= s.size(); i++)
//         {
//             if(i<=s.size()/2) s[i-1]='4';
//             else s[i-1]='7';
//         }
        
//     }
//     OUT(s);
//     return 0;
// }

#include <bits/stdc++.h>

long long int arrayy[100]= {47,74,4477,4747,4774,7447,7474,7744,444777,447477,447747,447774,474477,474747,474774,477447,477474,477744,744477,744747,744774,747447,747474,747744,774447,774474,774744,777444,44447777,44474777,44477477,44477747,44477774,44744777,44747477,44747747,44747774,44774477,44774747,44774774,44777447,44777474,44777744,47444777,47447477,47447747,47447774,47474477,47474747,47474774,47477447,47477474,47477744,47744477,47744747,47744774,47747447,47747474,47747744,47774447,47774474,47774744,47777444,74444777,74447477,74447747,74447774,74474477,74474747,74474774,74477447,74477474,74477744,74744477,74744747,74744774,74747447,74747474,74747744,74774447,74774474,74774744,74777444,77444477,77444747,77444774,77447447,77447474,77447744,77474447,77474474,77474744,77477444,77744447,77744474,77744744,77747444,77774444};

int main()
{
    long long int i,a;
    scanf("%I64d",&a);
    for(i=0;; i++)
    {
        if(arrayy[i]>=a)
        {
            printf("%I64d\n",arrayy[i]);
            break;
        }
        else if(a>77774444)
        {
            printf("4444477777\n");
            break;
        }
    }
    return 0;
}
