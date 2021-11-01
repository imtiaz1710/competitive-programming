#include <bits/stdc++.h>
using namespace std;


int main(){
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    int n;
    while (cin>>n)
    {
        int a[n],b[n],c[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d%d%d",&a[i],&b[i],&c[i]);
        }
        
        set<string> s;
        for (int i = 0; i < n; i++)
        {
            string str;
            cin>>str;
            int x;
            cin>>x;
            char ch;
            cin>>ch;
            x--;
            switch (ch)
            {
            case '+':
                if(a[x]+b[x]!=c[x])
                s.insert(str);
                break;
            case '-':
                if(a[x]-b[x]!=c[x])
                s.insert(str);
                break;
            case '*':
                if(a[x]*b[x]!=c[x])
                s.insert(str);
                break;
            default:
                if(a[x]+b[x]==c[x] || a[x]-b[x]==c[x] || a[x]*b[x]==c[x] )
                s.insert(str);
                break;
            }
        }

        if(s.size()==n)
        {
            cout<<"None Shall Pass!"<<endl;
            continue;
        
        }
        if(s.empty())
        {
            cout<<"You Shall All Pass!"<<endl;
            continue;
        
        }
        for (auto i = s.begin(); i !=s.end(); i++)
        {
            if(i!=s.begin())
            cout<<" ";
            cout<<*i;
            
        }
        cout<<endl;
        
        
        
    }
    
    return 0;
}