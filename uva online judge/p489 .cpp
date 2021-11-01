//copy
//author unkhown


#include <iostream>
#include <string>

#define STROKE 7

using namespace std;


int main() {
	string sln, guess;
	int correct,max_correct, rnd,flag,stroke;

	while(cin >> rnd && rnd + 1){
	    cin >> sln >> guess;
	    correct = 0;
	    stroke = 0;
	    max_correct = sln.size();

	    for(unsigned int i = 0; guess[i]&& stroke< STROKE; i++){
            if(stroke==STROKE) break;
	        flag = 0;
	        for(unsigned j = 0; sln[j] ; j++){
	            if(guess[i]==sln[j]) {
	                sln[j] = '*';
	                correct++;
	                flag = 1;
	            }
	        }
	        if(!flag)stroke++;
	    }

	    cout << "Round "<<rnd << endl;

	    if(correct==max_correct) cout << "You win." << endl;
	    else if(stroke == STROKE) cout << "You lose." << endl;
	    else cout << "You chickened out." << endl;

	}

	return 0;
}
