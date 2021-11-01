#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
string s;
int si; //size of string
int c=0; //count result


int subarray()
{
    
    for(int i=1;i<=si;i++) // i means length of substring
    {
        cout<<i<<"-->i"<<endl;
        int k=0;  //position
        while (k+i-1<si)
        {
            string ss;
            ss=s.substr(k,i);
            sort(ss.begin(),ss.end());
            for (int j = 0; j < ss.size()-1; j++)
            {
                if(ss[j]==ss[j+1])
                {
                    c--;
                    break;
                }
            }
            c++; 
            k++;
        }
        cout<<c<<endl;
        
    }
    
    return c;
}

int main() {
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    cin>>s;
    si=s.size();
    //sort(s.begin(),s.end());
    int res=subarray(); 
    cout<<res<<endl;
    return 0;
}
