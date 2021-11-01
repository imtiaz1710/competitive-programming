#include <bits/stdc++.h>
using namespace std;
int mul(int x,int y)
{
    return x*y;
}

int main(){
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    int (*p)(int,int);
    p=mul;
    cout<<p(2,3)<<endl;
    return 0;
}