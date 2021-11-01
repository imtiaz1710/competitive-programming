// #include <bits/stdc++.h>
// #define ll long long
// #define filein freopen("/home/imtiaz/Desktop/Dev skill contest 1/in.txt", "r", stdin)
// #define fileout freopen("/home/imtiaz/Desktop/Dev skill contest 1/out.txt","w", stdout)
// using namespace std;


// int main(){
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     // filein;
//     // fileout;
//     int n;
//     cin>>n;
//     int a[n];
//     char ch;
//     int cnt=0;
//     for (int i = 0; i < n; i++)
//     {
//         cin>>ch>>a[i];
//         if(ch=='-')
//         cnt++;
//     }
//     cout<<cnt;
//     cout<<endl;
    
//     return 0;
// }

#include <bits/stdc++.h>
#define ll long long
#define fin freopen("/home/imtiaz/Desktop/Dev skill contest 1/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/Dev skill contest 1/out.txt","w", stdout)
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // fin;
    // fout;
    int n;
    cin>>n;
    int tmp;
    char ch;
    vector <int> v;
    cin>>ch>>tmp;
    if(ch=='-') 
    v.push_back(0);
    else v.push_back(tmp);
    for (int i = 1; i < n; i++)
    {
        cin>>ch>>tmp;
        if(ch=='-')
        {
            auto it_minus=find(v.begin(),v.end(),tmp);
            if(it_minus==v.end()) 
            {
                v.push_back(0);
            }
            else
            {
                *it_minus=0;
            }
            
        }
        else
        {
            auto it_plus=find(v.begin(),v.end(),0);
            if(it_plus==v.end())
            {
                v.push_back(tmp);
            }
            else
            {
                *it_plus=tmp;
            }
            
        }  
    }
    cout<<v.size()<<endl;
    return 0;
}
