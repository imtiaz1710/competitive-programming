#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    std::ios::sync_with_stdio(false);
    int n;
    int sum=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
   sort(arr,arr+n);
   for(int i=0;i<n;i++)
   {
      for(int j=i+1;j<n;j++)
      {
          sum+=(arr[i]&arr[j]);
      }
   }
   cout<<sum<<endl;

}
