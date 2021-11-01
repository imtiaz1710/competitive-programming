#include <bits/stdc++.h>
using namespace std;


int main(){
    // freopen("in.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);
    int n;
    cin>>n;
    while (n)
    {
        int a[n][n];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin>>a[i][j];
            }
            
        }
        int row[n]={0};
        int col[n]={0};
        for (int i = 0; i < n; i++)
        {
            
            for (int j = 0; j < n; j++)
            {
                row[i]+=a[i][j];
                col[j]+=a[i][j];
            }
            
        }

        vector <int> v_row;
        vector <int> v_col;
        for (int i = 0; i < n; i++)
        {
            // cout<<row[i]<<endl;
            // cout<<col[i]<<endl;
            if(row[i]%2!=0) v_row.push_back(i);
            if(col[i]%2!=0) v_col.push_back(i);
            
        }
        if(v_row.size()==0 && v_col.size()==0) cout<<"OK"<<endl;
        else if(v_row.size()==1 && v_col.size()==1)
        {
            printf("Change bit (%d,%d)\n",v_row[0]+1,v_col[0]+1);
        }
        else
        {
            cout<<"Corrupt"<<endl;
        }
        
        
        cin>>n;
    }
    
    return 0;
}