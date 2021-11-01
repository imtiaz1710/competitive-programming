#include <bits/stdc++.h>
using namespace std;




int birthdayCakeCandles(vector<int> ar) {
    sort(ar.begin(),ar.end());
    reverse(ar.begin(),ar.end());
    // for (int i = 0; i < ar.size(); i++)
    // {
    //     cout<<ar[i]<<" ";
    // }
    
    int tmp=ar[0];
    int i=1;
    int cnt=1;
    while(ar[i]==tmp && i!=ar.size())
    {
        cnt++;
        i++;
    }
    return cnt;
}

int main(int argc, const char** argv) {
    int n;
    vector <int> v;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin>>tmp;
        v.push_back(tmp);

    }
    cout<<birthdayCakeCandles(v)<<endl;
    
    return 0;
}
