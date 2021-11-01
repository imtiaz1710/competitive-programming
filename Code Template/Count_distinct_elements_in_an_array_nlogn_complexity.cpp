
#include <bits/stdc++.h>
using namespace std;

int uniquevalue(int a[],int start,int end)
{
    int cnt=0;
    sort(a+start,a+end+1);
    for(int i=start;i<=end;i++)
    {
        while(i<=end-1 && a[i]==a[i+1])
        i++;

        cnt++;
    }

    return cnt;

}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<uniquevalue(a,0,n-1)<<endl;
    
    
}