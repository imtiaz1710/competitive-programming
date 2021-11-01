////
////#define filein freopen ("in.txt", "r", stdin)
////#define fileout freopen ("out.txt", "w", stdout)
////#define dbg(x) cerr << #x << ": " << x << endl
////#define ___ ios::sync_with_stdio (false); cin.tie (0);
////
////using namespace std;
////typedef long long ll;
////
////const int maxn = 0;
////
////int a[] = {8,7,6,5,4,3,2,1};
////
////int main(){
////	int n = 8;
////	int operation = 0;
////	for (int steps = 0; steps < n - 1; steps++){
////		bool swapHoiseKina = false;
////		for (int i = 0; i < n - 1 - steps; i++){
////			// if needed swap a[i] & a[i + 1]
////			operation++;
////			if (a[i] > a[i + 1]){
////				swap (a[i], a[i + 1]);
////				swapHoiseKina = true;
////			}
////		}
////		if (!swapHoiseKina) break;
////	}
////	for (int i = 0; i < n; i++)
////		cout << a[i] << " ";
////	cout << endl;
////	cout << "operations : " << operation << endl;
////	return 0;
////}
////
////
//
//
//
//#include <bits/stdc++.h>
//
//#define filein freopen ("in.txt", "r", stdin)
//#define fileout freopen ("out.txt", "w", stdout)
//#define dbg(x) cerr << #x << ": " << x << endl
//#define ___ ios::sync_with_stdio (false); cin.tie (0);
//
//using namespace std;
//typedef long long ll;
//
//const int maxn = 0;
//
//int a[] = {8};
//int n = 1;
//int temp[10];
//
//void mergesort (int L, int R){
//	if (L >= R) return; //base case
//	int mid = (L + R) / 2;
//	mergesort (L, mid); //calling left child
//	mergesort (mid + 1, R); //calling right child
//	for (int i = 0; i < n; i++)
//		temp[i] = a[i]; //storing array into temporary array
//	int i = L, j = mid + 1, t = L; //i = leftmost of left child, j = rightmost of right child
//	while (i <= mid and j <= R){ //comparison when both child is present
//		if (temp[i] < temp[j]){
//			a[t] = temp[i];
//			i++;
//		}
//		else{
//			a[t] = temp[j];
//			j++;
//		}
//		t++;
//	}
//	while (i <= mid){ //when only left child is present
//		a[t] = temp[i];
//		i++; t++;
//	}
//	while (j <= R){ //only right child is present
//		a[t] = temp[j];
//		j++; t++;
//	}
//	for (int i = 0; i < n; i++)
//		cout << a[i] << " ";
//	cout << endl;
//}
//
////merge sort
//int main(){
//	mergesort (0, n-1);
//	for (int i = 0; i < n; i++)
//		cout << a[i] << " ";
//	cout << endl;
//	return 0;
//}
//

//
//#include <bits/stdc++.h>
//
//#define filein freopen ("in.txt", "r", stdin)
//#define fileout freopen ("out.txt", "w", stdout)
//#define dbg(x) cerr << #x << ": " << x << endl
//#define ___ ios::sync_with_stdio (false); cin.tie (0);
//
//using namespace std;
//typedef long long ll;
//
//const int maxn = 0;
//
//bool cmp (pair <string, int> a, pair <string, int> b){
////	if (a.second == b.second){
////		if (a.first < b.first) return true;
////		else return false;
////	}
//	if (a.second == b.second){
//		return a.first < b.first;
//	}
//	return (a.second > b.second);
//}
//
//vector <pair <string, int> > v;
//
//int main(){
//	//filein;
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++){
//		string s;
//		int x;
//		cin >> s >> x;
//		v.push_back (make_pair (s, x));
//	}
//	sort (v.begin(), v.end(), cmp);
//	for (auto x : v)
//		cout << x.first << " " << x.second << endl;
//	return 0;
//}


#include <bits/stdc++.h>
 
#define filein freopen ("in.txt", "r", stdin)
#define fileout freopen ("out.txt", "w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define ___ ios::sync_with_stdio (false); cin.tie (0);
 
using namespace std;
typedef long long ll;
 
const int maxn = 0;

vector <ll> v;

int main(){
	//filein;
	int n, k;
	cin >> n >> k;
	for (int i = 0; i < n; i++){
		ll x;
		cin >> x;
		v.push_back (x);
	}
//	for (int i = 0; i < n; i++){
//		ll x;
//		cin >> x;
//	}
	sort (v.begin(), v.end());
	reverse (v.begin(), v.end());
	//alternate way
	//sort (v.rbegin(), v.rend());
	for (int i = 1; i < n; i++)
		v[i] += v[i - 1];
	while (k--){
		int idx;
		cin >> idx;
		cout << v[idx - 1] << endl;
	}
	return 0;
}
