#include <iostream>
#include <string.h>
#include <fstream>
#include<iomanip>
using namespace std;
class A
{
private:
    char name[20];
    char id[10];
    int num;
public:
    A(char* name,char* id,int num)
    {
        strcpy(this->name,name);
        strcpy(this->id,id);
        this->num=num;
    }
    friend void operator<<(ofstream &os,A ob );
};
 void operator<<(ofstream &os,A ob )
    {

        os<<endl;
        os<<setw(13)<<left<<ob.name;
        os<<setw(13)<<left<<ob.id;
        os<<setw(13)<<left<<ob.num;
        os<<endl;
    }
int main()
{
    ofstream os;
////    ofstream bin;
//    bin.open("D:\\competitive programming\\practice c++\\file operation.bin",ios::binary);
    os.open("D:\\competitive programming\\practice c++\\file operation.txt");
    A ob[3]={A("imtiaz","1710",1),A("Moin","2720",2),A("sumaya","3730",3)};
    os<<"name         "<<"ID        "<<"Num       "<<endl;
        for(int i=0;i<30;i++)
            os<<(char)45;
    os<<ob[0];
    os<<ob[1];
    os<<ob[2];
//    bin.write((char*) &ob[0],sizeof(ob[0]));
//    bin.write((char*) &ob[1],sizeof(ob[1]));
//    bin.write((char*) &ob[2],sizeof(ob[2]));
    os.close();
//    bin.close();
  ifstream in("D:\\competitive programming\\practice c++\\file operation.txt");
//  in.seekg(sizeof(ob[2]),ios::end);
  string a;
  while(!in.eof()){
  getline(in,a);
  cout<<a;
  }
  in.close();

}
