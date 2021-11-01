    #include <iostream>
    #include <stdio.h>
    using namespace std;
    int main()
    {
        int t;
        scanf("%d",&t);
        int z=0;

        while(z!=t)
        {
            char* a;
            string s;
            int r,n;
            cin>>s>>r>>n;
            int l=0,i,j,k=0;
            while(s[l]!='\0')
                l++;
            for(i=0;i<r;i++)
            {
                l=l*2;
                a=new char[l+1];
                for(j=0;j<l/2;j++)
                {
                    if(s[j]=='1')
                    {
                        a[k]='1';
                        a[k+1]='0';
                    }
                    else
                    {
                        a[k]='0';
                        a[k+1]='1';
                    }
                    k+=2;
                }
                a[l]='\0';
                int m=0;
                while (a[m]!='\0')
                {
                    s[m]=a[m];
                    m++;
                }


            }
        cout<<s[n]<<endl;
        z++;
        delete a;
        }
    return 0;
    }
