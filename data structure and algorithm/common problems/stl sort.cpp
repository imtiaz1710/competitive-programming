#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>


using namespace std;

int main()
{
    int a[5]={3,5,2,3,1};
    sort(a,a+5);
    for(int i=0;i<5;i++)
    cout<<a[i]<<endl;
    string n="imtiaz";
    sort(n.begin(),n.end());
    cout<<n<<endl;
    vector <pair<int,int> > vp;
    vp.push_back({3,2});
    vp.push_back({3,1});
    vp.push_back({6,2});
    vp.push_back({4,2});
    sort(vp.begin(),vp.end());
    for(int i=0;i<vp.size();i++)
        cout<<vp[i].first<<","<<vp[i].second<<endl;

}
