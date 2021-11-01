#include <bits/stdc++.h>
#define ll long long
#define fin freopen("/home/imtiaz/Desktop/dev skill contest 4/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/dev skill contest 4/out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
#define mx 1e4+7

using namespace std;

ll mark[int(mx)];
vector <int> prime;
void is_prime()
{
    mark[0]=mark[1]=1;
    for(int i=4;i<mx;i+=2) mark[i]=1;
    for (int i =3 ; i*i<mx; i+=2)
    {
        for(int j=i*i;j<mx;j+=i+i)
        {
            mark[j]=1;
        }
    }
    for (int i = 0; i < mx; i++)
    {
        if(!mark[i]) 
        {
            prime.push_back(i);
           // cout<<i<<endl;
        }
        
    }
}

bool is_divisable(int n,int m)
{
    vector <pair<int,int>> ppf;
    int limit=sqrt(m);
    for (int i = 0; prime[i]<=limit && i<prime.size(); i++)
    {
        //cout<<"loop 1 e ghuri"<<endl;
            int cnt=0;
            while (m%prime[i]==0)
            {
                //cout<<"loop 2 e ghuri"<<endl;
                m=m/prime[i];
                cnt++;
            }
            if(cnt) ppf.push_back(make_pair(prime[i],cnt));
        if(m==1) break;
    }
    if(m>1) ppf.push_back(make_pair(m,1));
    //n! er jonno operation  
    bool res_flag=0;
    for (int i = 0; i < ppf.size(); i++)
    {
        //cout<<"loop 3 e ghuri"<<endl;
        int tmp=ppf[i].first;
        int pow_count=0;
        while (tmp<=n)
        {
            //cout<<"loop 4 e ghuri"<<endl;
            pow_count+=n/tmp;
            tmp*=ppf[i].first;
            //dbg(tmp);
            //dbg(n);
        }
        if(pow_count<ppf[i].second)
        {
            res_flag=1;
            break;
        }
    }
    return !res_flag;

    
}
int main(){
   //fin,fout;
    is_prime();
    int n,m;
    while (cin>>n>>m)
    {
        if(m==0)
        {
            printf("%d does not divide %d!\n",m,n);
            continue;
        }
        if(m==1)
        {
             printf("%d divides %d!\n",m,n);
             continue;
        }
        if(is_divisable(n,m))
        printf("%d divides %d!\n",m,n);
        else
        {
        printf("%d does not divide %d!\n",m,n);
        }
        //cout<<"loop 5 e ghuri"<<endl;
    }
    
    return 0;
}