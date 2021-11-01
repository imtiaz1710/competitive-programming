#include <bits/stdc++.h>
using namespace std;
void countsort(int a[],int n)
{
        map<int,int> m;



        for(int i=0;i<n;i++)
        {
            m[a[i]]++;
        }

        int sum=n;

        map<int,int>::iterator it;

        for(it=m.begin();it!=m.end();it++)
        {
            int tmp=it->second;
            tmp--;
            while(tmp>0)
            {
               sum+=tmp;
               tmp--;
            }
        }
        cout<<sum<<endl;

}

int main()
{
    int n;
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n];

        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        countsort(a,n);
    }


}
