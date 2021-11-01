#include <iostream>
using namespace std;
int main()
{
    int a,m;
    cin>>a>>m;
    for(int i=1;i<m;i++)
    {
        if((a*i)%m==1){
            cout<<"result:"<<i<<endl;
                return 0;
        }

    }
    cout<<"no inverse!"<<endl;
}
