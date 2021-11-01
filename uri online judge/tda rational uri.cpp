#include <bits/stdc++.h>
using namespace std;


int main(){
    int n1,n2,d1,d2;
    int n,d;
    char c,sign;
    int t;
    cin>>t;
    while (t--)
    {
        cin>>n1>>c>>d1>>sign>>n2>>c>>d2;
        switch (sign)
        {
        case '+':
            n=(n1*d2+n2*d1);
            d=d1*d2;
            break;
        case '-':
            n=(n1*d2-n2*d1);
            d=d1*d2;
            break;
        case '*':
            n=n1*n2;
            d=d1*d2;
            break;
        case '/':
            n=n1*d2;
            d=n2*d1;
            break;
        default:
            break;
        }  
        int g=__gcd(n,d);

        
        //cout<<g<<endl;
        cout<<n<<'/'<<d<<" = "<<n/abs(g)<<'/'<<d/abs(g)<<endl;  
    }
    
    return 0;
}