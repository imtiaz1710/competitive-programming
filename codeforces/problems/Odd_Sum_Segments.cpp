#include <bits/stdc++.h>
using namespace std;

int main() {

        int q;
        cin>>q;
        while (q--) {
            int count = 0, j = 0;
            int n;
            int k;
            cin>>n>>k;
            int tmpk = k;
            int a[n];
            int b[k];

            for (int i = 0; i < n; i++) {
                cin>>a[i];
                if (a[i] % 2 == 1) {
                    count++;
                    if(tmpk!=0) {
                        b[j++] = i + 1;
                        tmpk--;
                    }

                }

            }

            if (count < k || (count % 2 != k % 2)) {
                cout<<"No"<<endl;
            }
            else {
                cout<<"YES"<<endl;

                for (int i=0;i<k-1;i++) {
                    printf("%d ", b[i]);
                }
                printf("%d ", n);

                cout<<endl;
            }

        }

    }



