//10276 - Hanoi Tower Troubles Again!

#include <iostream>
#include <string>
#include <cmath>

#define MAX 50
using namespace std;

bool is_squared_sum(int a,int b){
    long double sr =(long double) sqrt(a+b);
    
    return (sr - floor(sr)==0);
}

int main() {
	int t, pegs[MAX], ball_i,peg_i,n;
	
	cin >> t;
	
	while(t--){
	    bool contain_balls[MAX] = {false};
	    cin >> n;
		
	    ball_i = 0;
	    peg_i=0;
	    while(peg_i < n){
	        ball_i++;
            
	        for (peg_i = 0; peg_i <n; peg_i++)
			{
				if(!contain_balls[peg_i])
				{
					pegs[peg_i] = ball_i;
					contain_balls[peg_i] = true;
					break;

				}
				else if(is_squared_sum(pegs[peg_i],ball_i) && contain_balls[peg_i])
				{
					pegs[peg_i]=ball_i;
					break;

				} 
				
			}
			//cout<<peg_i<<endl;  
	        
	    }
	    
	    cout << --ball_i << endl;
	    
	}
	
	return 0;
}