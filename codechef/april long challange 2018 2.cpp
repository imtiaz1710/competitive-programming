#include <iostream>
#include <vector>
using namespace std;
void fn()
{
    long n;
    int add,sum=0,a;
    cin>>n;
    vector <int> arr;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        arr.push_back(a);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            add=arr[i]+arr[j];
            if(add%2==0)
            {
                for(int k=0;k<n;k++)
                {
                    if(arr[k]==add/2)
                    {
                        sum++;
                        break;

                    }

                }
            }
        }
    }
    cout<<sum<<endl;

}
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        fn();
    }
    return 0;
}
