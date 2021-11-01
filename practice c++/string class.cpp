#include <iostream>
using namespace std;
class string1
{

   int maxlen,length;
   char *str;
   public:
       int getlen();
       char *getstring();
       void showstring();
       string1(const char* s);
       string1(int len=127);
       virtual ~string1();

};
string1::string1(const char* s)
{
   int i=0;
    while(*(s+i))
    {
        i++;
    }
    str=new char[i+1];
    maxlen=length=i;
    for(int j=0;j<i;j++)
    *(str+j)=*s++;
    *(str+i)=NULL;
}
string1::string1(int len)
{
    str=new char[len+1];
    *str=NULL;
    length=0;
    maxlen=len;
}
int string1::getlen()
{
    return length;
}
char* string1::getstring()
{
    return str;
}
void string1::showstring()
{
    if(length==0)
    {
        cout<<"string is empty"<<endl;
    }
    else{
    cout<<str<<endl;
    }
    cout<<"length : "<<length<<endl;
    cout<<"max length : "<<maxlen<<endl<<endl;
}
string1::~string1()
{
    delete [] str;
}
int main()
{
   string1 ob2("imtiaz zaman mehedi"),ob,ob3(33);

   ob2.showstring();
   ob.showstring();
   ob3.showstring();


}

