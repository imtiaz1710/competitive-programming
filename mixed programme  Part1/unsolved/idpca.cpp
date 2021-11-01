
// #include <bits/stdc++.h>
// using namespace std;
// //vector <int> indx;
// bool cmp(pair<int,int> a,pair<int,int> b)
// {
//     if(a.first==b.first)
//     return a.second<b.second;
    
//     return a.first<b.first;
// }
// int main()
// {
//     int array_num,case_no;
//     cin>>array_num>>case_no;
//     set<int> arr[array_num];
//     int l,r,k;
//     for (int i = 0; i <case_no ; i++) {
//         cin>>l>>r>>k;
//         for (int j = l; j <=r ; j++) {
//             arr[j-1].insert(k);
//         }
//     }
//     int min=1000000000;
//     vector <pair<int,int>> res;
    
//     for (int i = 0; i < array_num; i++) {
//         auto it_begin=arr[i].begin();
//         auto it_end=arr[i].end();
//         it_end--;
//         res.push_back(make_pair(*it_begin,*it_end));
//     }
//     sort(res.begin(),res.end(),cmp);
//     for (int i = 0; i < array_num; i++)
//     {
//         int fst=res[i].first;
//         int lst=res[i].second;
       
//         for (int j = 0; j < array_num; j++)
//         {
//             auto it1= arr[j].begin();
//             auto it2=arr[j].end();
//              it2--;
//              if(*it1==fst && *it2==lst)
//              {
//                  cout<<j+1<<" ";
//                     break;
//              }
//         }
        
//     }
//     cout<<endl;
    
    

//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;
 set<int> arr[10001];
bool cmp(pair<int,int> a,pair<int,int> b)
{
    if(a.first==b.first && arr[a.second].size()==arr[b.second].size())
    {
            return a.second<b.second;
    }
    if(a.first==b.first)
    {
        return arr[a.second].size()<arr[b.second].size();
    }
    return a.first<b.first;
}
int main()
{
    int array_num,case_no;
    cin>>array_num>>case_no;
   
    int l,r,k;
    for (int i = 0; i <case_no ; i++) {
        cin>>l>>r>>k;
        for (int j = l; j <=r ; j++) {
            arr[j-1].insert(k);
        }
    }
    
    vector <pair<int,int>> res;
    
    for (int i = 0; i < array_num; i++) {
        auto it_begin=arr[i].begin();
        res.push_back(make_pair(*it_begin,i));
    }
    sort(res.begin(),res.end(),cmp);
    for (int i = 0; i < res.size(); i++)
    {
        cout<<res[i].second+1<<" ";
    }
    
    cout<<endl;
    return 0;
}


