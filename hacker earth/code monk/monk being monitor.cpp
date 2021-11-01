#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];
        int max=0;
        for (int i = 0; i <n; i++)
        {
            cin>>a[i];
            if (a[i]>max)
            {
                max=a[i];
            }

        }
        int b[max+1]={0};
        for (int i = 0; i < n; i++)
        {
            /* code */
                b[a[i]]++;
        }
        int h1=0,h2=0;
        sort(b,b+max+1);

        // for (int i = 0; i < max+1; i++)
        // {
        //     /* test code */
        //         cout<<b[i]<<" ";
        // }
        //cout<<endl;

        for (int i = 0; i <max+1; i++)
        {
            /* code */
            if(b[i]>0)
            {
                h1=b[i];
                break;
            }
        }

        for (int i = max; i >=0; i--)
        {
            /* code */
            if(b[i]>0)
            {
                h2=b[i];
                break;
            }
        }

       if(h1!=0 && h2!=0 && h2-h1!=0)
       {
           cout<<h2-h1<<endl;
       }
       else
       {
           cout<<1<<endl;
       }




    }
}
