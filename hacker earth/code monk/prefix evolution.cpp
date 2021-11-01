
#include <iostream>
using namespace std;
int top=-1;
void push(int x,int stk[])
{
   stk[++top]=x;
}
void pop()
{
    top--;
}
int main()
{
    int tmp;
    string s;
    getline(cin,s);
    int stk[3];
    for(int i=s.size()-1;i>=0;i--)
    {
        if(s[i]==' '||s[i]==',')
            continue;
        else if(s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/')
        {
            if(s[i]=='+'){
                tmp=stk[top]+stk[top-1];
                pop();
                pop();
                push(tmp,stk);
            }
            else if(s[i]=='-'){
                tmp=stk[top]-stk[top-1];
                pop();
                pop();
                push(tmp,stk);
            }
            else if(s[i]=='*'){
                tmp=stk[top]*stk[top-1];
                pop();
                pop();
                push(tmp,stk);
            }
            else if(s[i]=='/'){
                tmp=stk[top]/stk[top-1];
                pop();
                pop();
                push(tmp,stk);
            }
        }
        else if(s[i]>='0'&&s[i]<='9'){
            int operand=0;
            int c=1;
            while(s[i]>='0'&&s[i]<='9')
            {
                operand=operand+(int)(s[i]-'0')*c;  //process to make int from character string
                c=c*10;
                i--;
            }
            i++;
           push(operand,stk);
        }
        else{
            cout<<"You pressed a wrong key!"<<endl;
            return 0;

        }
    }
    cout<<stk[top];
    return 0;
}
