#include <bits/stdc++.h>
using namespace std;


int main(){
    int cnt=0;
    int i=1;
    int p=1;
    int tmp;
    while (i<=4000000)
    {
        if(i%2==0) cnt+=i;
        tmp=i;
        i=i+p;
        p=tmp;
    }
    

    cout<<cnt<<endl;
    return 0;
}