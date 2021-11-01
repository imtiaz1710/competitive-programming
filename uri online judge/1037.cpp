#include <iostream>
using namespace std;
int main()
{
    float n;
    cin>>n;
    if(n<0.0||n>100.0)
    cout<<"Fora de intervalo"<<endl;
    else if(n>=0.0&&25.0>=n)
    cout<<"Intervalo [0,25]"<<endl;
    else if(25.0<n&&50.0>=n)
    cout<<"Intervalo (25,50]"<<endl;
    else if(50.0<n&&75.0>=n)
    cout<<"Intervalo (50,75]"<<endl;
    else if(75.0<n&&100.0>=n)
    cout<<"Intervalo (75,100]"<<endl;
    return 0;
}
