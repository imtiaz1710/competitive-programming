
#define filein freopen ("in.txt", "r", stdin)
#define fileout freopen ("out.txt", "w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define ___ ios::sync_with_stdio (false); cin.tie (0);
 
using namespace std;
typedef long long ll;
 
const int maxn = 0;

//vector <int> v;

//int main(){
//	//vector
//	for (int i = 1; i <= 10; i++){
//		v.emplace_back(i);
//	}
//	//v = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
//	cout << v.size() << endl;
//	for (int i = 0; i < v.size(); i++){
//		cout << v[i] << " ";
//	}
//	cout << endl;
//	v.clear();
//	return 0;
//}

//int main(){
//	string s = "bangladesh";
//	cout << s.size() << endl;
//	cout << s[6] << endl;
//	for (int i = 0; i < 10; i++){
//		cout << s[i] << endl;
//	}
//	//reverse - hsedalgnab
//	//reverse (s.begin(), s.end());
//	cout << s << endl;
//	//substring
//	string new_s =  s.substr(2, 5);
//	cout << new_s << endl;
//	return 0;
//}

//int main(){
//	queue <int> q;
//	//FIFO data structure - first in first out
//	//cout << q.empty() << endl;
//	q.push (5);
//	q.push (4);
//	q.push (3);
//	cout << q.front() << endl;
//	q.pop();
//	cout << q.front() << endl;
//	return 0;
//}

//int main(){
////	ios::sync_with_stdio (false);
////	cin.tie (0);
////
////	stack <int> s;
////	//LIFO data structure - last in last out
////	s.push (5);
////	s.push (4);
////	s.push (3);
////	cout << s.top() << endl;
////	s.pop();
////	cout << s.top() << endl;
////	cout << s.size() << endl;
//	ll a = 5;
//	cout << a << endl;
//	return 0;
//}


//priority queue
//int main(){
//	priority_queue <int> q;
//	q.push (5);
//	q.push (6);
//	q.push (7);
//	q.push (8);
//	q.push (1);
//	q.push (2);
//	q.push (3);
//
//	cout << q.top() << endl;
//	q.pop();
//	cout << q.top() << endl;
//	return 0;
//}

//set
//int main(){
//	set <int> s;
//	s.insert (5);
//	s.insert (5);
//	s.insert (4);
//	for (auto it = s.begin(); it != s.end(); it++){
//		cout << *(it) << endl;
//	}
//	cout << s.size() << endl;
//	s.clear();
//	cout << s.size() << endl;
//	return 0;
//}

//int main(){
//	map <string, string> m;
//	cout << m["dhaka"] << endl;
//	cout << m["khulna"] << endl;
//	m.clear();
//	return 0;
//}

// bangladesh - dhaka
// india - new_delhi
//vector <pair <int, int> > v;
//int main(){
//	pair <int, string> p = make_pair (40, "tamim");
//	pair <int, string> q = make_pair (40, "iqbal");
//	v.emplace_back (p);
//	v.emplace_back (make_pair (4, "asdf"));
//	return 0;
//}
