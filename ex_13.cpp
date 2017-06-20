#include "../../std_lib_facilities.h"
bool jest_pierwsza(int);
vector<int> pierwsza;

int main() {
	int min = 3;
	int max = 100000;
	cout << "Program znajdujacy liczby pierwsze w zakresie od 1 do 100 [sito Eratostenesa]!\n";
	pierwsza.push_back(2);
	for (int i = min; i < max; i++) {
		if (jest_pierwsza(i))
			pierwsza.push_back(i);
	}
	for (int i = 0; i < pierwsza.size(); i++) {
		cout << pierwsza[i] << endl;
	}
	keep_window_open();
	return 0;
}

bool jest_pierwsza(int n) {
	for (unsigned int i = 0; pierwsza[i]<=sqrt(n); ++i) {
		if (n%pierwsza[i] == 0) return false;
	}
	return true;
}