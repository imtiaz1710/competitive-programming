#include <cstdio>
using namespace std;
int main()
{
    int n;
    int temp,cnt;
    temp=cnt=0;
    scanf("%d",&n);
    while(n!=0)
    {
        if(n%2==1)
            cnt++;
        else
            cnt=0;
        if(cnt>temp)
            temp=cnt;
        n=n/2;
    }
    printf("%d\n",temp);
    return 0;
}
