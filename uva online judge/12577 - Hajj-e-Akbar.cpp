#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main()
{
    char *s;
    s=new char[20];

    int i=1;
    while(1)
    {
        cin>>s;

        if(strcmp(s,"*")==0) return 0;
        printf("Case %d: ",i++);
        if(strcmp(s,"Hajj")==0) printf("Hajj-e-Akbar\n");
        if(strcmp(s,"Umrah")==0) printf("Hajj-e-Asghar\n");

    }
    return 0;
}
