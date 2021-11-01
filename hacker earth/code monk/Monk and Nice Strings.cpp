#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
    char s[n][11];
    for (int i = 0; i < n; i++)
    {
        scanf("%s",s[i]);
    }

    for(int i=0;i<n;i++)
    {
        int tmp=i;
        int cnt=0;
            while(tmp>=0)
            {
                if(strcmp(s[tmp],s[i])<0)
                cnt++;
                tmp--;
            }

        cout<<cnt<<endl;

    }


}
