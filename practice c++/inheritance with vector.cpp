#include <iostream>
#include <vector>

using namespace std;


class Person{
	protected:
		string firstName;
		string lastName;
		int id;
	public:
		Person(string firstName, string lastName, int identification){
			this->firstName = firstName;
			this->lastName = lastName;
			this->id = identification;
		}
		void printPerson(){
			cout<< "Name: "<< lastName << ", "<< firstName <<"\nID: "<< id << "\n";
		}

};
class Student :  public Person{
	private:
		int num;
	public:
         Student(string fname,string lname,int id,vector<int> scores):Person(fname,lname,id)
         {
             int sum=0;
             for(int i=0;i<scores.size();i++)
                 sum+=scores.at(i);
             num=sum/scores.size();

         }
         string calculate()
         {
            if(num>=90)
                return "O";
             else if(num>=80)
                 return "E";
             else if(num>=70)
                 return "A";
             else if(num>=55)
                 return "P";
             else if(num>=40)
                 return "D";
             else if(num<40)
                 return "T";

         }
};
int main() {
	string firstName;
  	string lastName;
	int id;
  	int numScores;
	cin >> firstName >> lastName >> id >> numScores;
  	vector<int> scores;
  	for(int i = 0; i < numScores; i++){
	  	int tmpScore;
	  	cin >> tmpScore;
		scores.push_back(tmpScore);
	}
	Student* s = new Student(firstName, lastName, id, scores);
	s->printPerson();
	cout << "Grade: " << s->calculate() << "\n";
	return 0;
}
