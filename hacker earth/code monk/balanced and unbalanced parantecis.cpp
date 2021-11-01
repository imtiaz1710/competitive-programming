 #include <iostream>
 #include <string>
    using namespace std;
    int top;
    void  check (string str, int n, char stck [ ])
    {
        for(int i = 0 ; i < n ; i++ )
        {
            if (str [ i ] == '(' )
            {
                top = top + 1;
                stck[ top ] = '(';
            }
            if(str[ i ] == ')')
            {
                if(top == -1 )
                {
                    top = top -1 ;
                    break ;
                 }
                else
                {
                     top = top -1 ;
                }
            }
        }
        if(top == -1)
            cout << "String is balanced!" << endl;
        else
            cout << "String is unbalanced!" << endl ;
    }

    int main ( )
    {
        int t;
        cin>>t;
        //balanced parenthesis string.
        while(t--){
        string str;
        cin>>str;
        // unbalanced string .
        //char str1 [ ] = { ‘(’ , ‘(’ , ‘a’ , ‘ + ’ , ‘ b’ , ‘)’ } ;
        char stck [ str.size() ] ;
        top = -1;
        int n=str.size();
        check (str ,n , stck );
        }      //Passing balanced string
        //top = -1 ;
        //check(str1 , 5 , stack) ;    //Passing unbalanced string
        return 0;

    }
