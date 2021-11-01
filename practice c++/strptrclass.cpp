#include <iostream>
#include <string.h>
using namespace std;
class student
{
    char sname[14];
    char sid[10];
    float scgpa;
public:
    void getinfo(char *name,char *id,float cgpa)
    {
        strcpy(sname,name);
        strcpy(sid,id);
        scgpa=cgpa;
    }
    void showinfo(void)
    {
        cout<<"name:"<<sname<<'\n';
        cout<<"id:"<<sid<<'\n';
        cout<<"cgpa:"<<scgpa<<"\n\n";

    }

};
int main(void)
{
    student A,B;
    A.getinfo("B.M. Morshed","118181818",3.79);
    B=A;
    cout<<"\nprinting object a info:\n\n";
    A.showinfo();
    cout<<"printing object b info:\n\n";
    B.showinfo();
}
