#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;
class student
{
public:
    char *sname;
    char *sid;
    void allo()
    {
        sname=(char*) malloc(19);
        sid=(char*) malloc(20);
    }
   void getinfo(char *name,char *id)
{
    strcpy(sname,name);
    strcpy(sid,id);
}
};
int main()
{
    student a;
    a.allo();
    a.getinfo("imtiaz","1710");

    cout<<a.sname;
}
