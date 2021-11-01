#include <bits/stdc++.h>
using namespace std;


int main(){
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    int n;
    cin>>n;
    vector <int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    int x,y;
    cin>>x;
    x--;
    v.erase(v.begin()+x);
//     for (int i = 0; i < v.size(); i++)
//    {
//        cout<<v[i];
//    }
    cin>>x>>y;
    x--;
    y--;
    v.erase(v.begin()+x,v.begin()+y);
    cout<<v.size()<<endl;
   for (int i = 0; i < v.size(); i++)
   {
       cout<<v[i]<<" ";
   }
   
    cout<<endl;
    
    return 0;
}