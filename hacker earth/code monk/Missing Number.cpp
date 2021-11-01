    #include <bits/stdc++.h>
    using namespace std;
    int compare(const void* a, const void* b)
            {
            const int* x = (int*) a;
            const int* y = (int*) b;
            if (*x > *y)
                return 1;
            else if (*x < *y)
                return -1;
            return 0;
            }
    int main()
    {
        int t,n;
        cin>>t;


        while(t--)
        {

            cin>>n;
            int a[n];
            for(int i=0;i<n;i++)
            {
            cin>>a[i];
            }
            qsort(a,n,sizeof(int),compare);
//            reverse(a,a+n);

            int count=2;
            for(int x:a)
            {
                if(x>=count)
                {
                count+=2;
                }

            }
            cout<<count<<endl;
        }
    }
