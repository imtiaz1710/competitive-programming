// #include <bits/stdc++.h>
// #define ll long long
// #define us unsigned short int
// #define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
// #define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
// #define dbg(x) cerr << #x << ": " << x << endl
// #define fastio ios::sync_with_stdio (false); cin.tie (0);
// using namespace std;
// bool is_ok(int n)
// {
//     int sq=sqrt(n);
    
//     for (int i = 2; i <= sq; i++)
//     {
//         if(n%i==0 and ((n/i)%2==1 or i%2==1))
//         {
//             return false;
//         }
           
//     }
    
//     return true;
// }

// int div(int n)
// {
//     int sq=sqrt(n);
//     vector<int> ele;
//     for (int i = 2; i <= sq; i++)
//     {
//        // cout<<"prb1";
//         if(n%i==0){
//             if ((n/i)%2== 1 or i % 2 == 1)
//             {
//                 if ((n / i) % 2 == 0 and (n/i)!=2)
//                     ele.push_back(n / i);
//                 if (i % 2 == 0 and i!=2)
//                     ele.push_back(i);
//             }
//         }
        
//     }
//     if(ele.empty()) return 0;
//     for (int i = 0; i < ele.size(); i++)
//     {
//         if(is_ok(ele[i])) return ele[i];
//     }
//     return ele[0];
    
// }

// int main(){
//     //fin;
//     int t;
//     cin>>t;
//     while (t--)
//     {
//         int n;
//         cin>>n;
//         int cnt=0;
//         while (n>1)
//         {
//             if(n%2==1) {
//                 n=1;
//                 cnt++;
//             }
//             else{
//                 int tmp=div(n);
//                 if(tmp==0){
//                     n--;
//                     cnt++;
//                 }
//                 else
//                 {
//                     n=tmp;
//                     cnt++;
//                 }
//             }
            
//         }
        
//         if(cnt%2==1) {
//             cout << "Ashishgup"<<endl;
//         }
//         else
//         {
//             cout << "FastestFinger"<<endl;
//         }
        
//     }
    
//     return 0;
// }


#include <bits/stdc++.h>
#define ll long long
#define us unsigned short int
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;
bool is_pow2(int n)
{
    //return ceil(log2(n))==floor(log2(n));
    return n && (!(n & (n - 1)));
}

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        bool a,b;
        a=b=0;
        if(n==1) b=1;
        else if(n==2 or n%2==1)
        {
            a=1;
        }
        else
        {
            if(is_pow2(n)) b=1;
            else if(n%4==0)
            {
                a=1;
            }
            else
            {
                n/=2;
                for (int i = 3; i < sqrt(n)+1; i++)
                {
                    if(n%i==0 and n/i!=1)
                    {
                        a=1;
                    }
                }
                if(a==0) b=1;
                
            }
        }
        if(a)
            cout << "Ashishgup"<<endl;
        else
            cout << "FastestFinger"<<endl;
    }
    
    return 0;
}