#include "../../std_lib_facilities.h"
vector<int> fo(vector<int>& rev);
void fo1(vector<int>& rev);
void print(const vector<int>& rev);
int main()
try {
	vector<int> reverse(5);
	reverse[0] = 1;
	reverse[1] = 3;
	reverse[2] = 5;
	reverse[3] = 7;
	reverse[4] = 9;
	print(reverse);
	vector<int>rev1 = fo(reverse);
	print(rev1);
	fo1(reverse);
	print(reverse);
	keep_window_open();
}
catch (exception& e) {
	cerr << "Blad: " << e.what() << endl;
	keep_window_open();
	return 1;
}
vector<int> fo(vector<int>& rev) {
	vector<int> check;
	for (int i = 0; i< rev.size(); ++i) {
		check.push_back(rev[rev.size() - (i+1)]);
	}
	return check;
}
void fo1(vector<int>& rev) {
	for (int i = 0; i < rev.size()/2; ++i) {
		swap(rev[i], rev[rev.size() - (i + 1)]);
	}
}
void print(const vector<int>& rev) {
	for (int j = 0; j < rev.size(); ++j) {
		cout << rev[j] << " ";
	}
	cout << endl;
}
