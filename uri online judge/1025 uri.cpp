#include <bits/stdc++.h>
//using namespace std;


int main(){
    int c=0;
    int n,q;
    std::cin>>n>>q;
    while(!(n==0 && q==0))
    {
        c++;
       std::vector<int>  s;
       std::vector<int> :: iterator it;

        for (int i = 0; i < n; i++)
        {
            int tmp;
            std::cin>>tmp;
            s.push_back(tmp);
        }
        int a[q];
        for (int i = 0; i < q; i++)
        {
            std::cin>>a[i];
        }
        printf("CASE# %d:\n",c);
        sort(s.begin(),s.end());
        for (int i = 0; i < q; i++)
        {
            
            
            it=std::find(s.begin(),s.end(),a[i]);
            if(it==s.end())
            printf("%d not found\n",a[i]);
            else
            {
                
                
               std:: cout<<a[i]<<" found at "<< it - s.begin()+1<<std::endl;
            }
            

            
        }
        
     std::cin>>n>>q;   
        
    }
    return 0;
}