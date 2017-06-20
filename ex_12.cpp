#include "../../std_lib_facilities.h"
bool jest_pierwsza(int n);
vector<int> pierwsza;

int main() {
	int min = 3;
	int max = 0;
	cout << "Program znajduj¹cy liczby pierwsze w zakresie od 1 do max!\n";
	cout << "Wpisz gorna granice [max]\n";
	cin >> max;
	if (max < 3) { cout << "Max musi byæ wieksze od min!\n"; }
	pierwsza.push_back(2);
	for (int i = min; i <= max; i++) {
		if(jest_pierwsza(i))
			pierwsza.push_back(i);
	}
	cout << "Pierwsze\n";
	for (int i = 0; i < pierwsza.size(); i++) {
		cout << pierwsza[i] << endl;
	}
		keep_window_open();
		return 0;
	}

bool jest_pierwsza(int n) {
	for (unsigned int i = 0; i < pierwsza.size(); ++i) {
		if (n%pierwsza[i] == 0) return false;
	}
	return true;
}