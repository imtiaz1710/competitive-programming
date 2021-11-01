#include <bits/stdc++.h>
#define pi pair<int,string> 
using namespace std;

void show(multimap <int,string> tmp){
    // multimap <int,string> tmp=pq;
    auto it=tmp.end();
    it--;
   int val=it->first;
   
    while (it->first==val)
     it--;

     it++;
    while (it!=tmp.end())
    {
        cout<<it->second<<endl;
        it++;
    }
    
    
   
}
int main(){
    // freopen("/home/imtiaz/Desktop/Dev skill contest 1/in.txt", "r", stdin);
    // freopen("/home/imtiaz/Desktop/Dev skill contest 1/out.txt", "w", stdout);
    int t;
    cin>>t;
    int tc=0;
    while (t--)
    {
         multimap <int,string> v;
        for (int i = 0; i < 10 ; i++)
        {
            string str;
            int val;
            cin>>str>>val;
            v.insert(make_pair(val,str));
        } 
        printf("Case #%d:\n",++tc);  
        // for (auto it = v.begin(); it !=v.end().begin()+2; it++)
        // {
        //     cout<<it.first<<endl;
        // }
        show(v);
        
    }
    
    return 0;
}