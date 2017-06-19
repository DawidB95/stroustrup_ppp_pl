#include "../../std_lib_facilities.h"

int main() {
	string liczba = "";
	vector<string>words(10);
	words[0] = "zero";
	words[1] = "one";
	words[2] = "two";
	words[3] = "three";
	words[4] = "four";
	words[5] = "five";
	words[6] = "six";
	words[7] = "seven";
	words[8] = "eight";
	words[9] = "nine";
	vector<string>number(10);
	number[0] = "0";
	number[1] = "1";
	number[2] = "2";
	number[3] = "3";
	number[4] = "4";
	number[5] = "5";
	number[6] = "6";
	number[7] = "7";
	number[8] = "8";
	number[9] = "9";
	bool znalezione = false;
	cout << "Wpisz liczbe slownie lub odpowiadajacy jemu znak cyfrowy.\n";
	while (cin >> liczba) {
		for (int i = 0; i < words.size(); i++) {
			if (liczba == words[i]) {
				cout << i << endl;
				znalezione = true;
			}
			else if (liczba == number[i]) {
				cout << words[i] << endl;
				znalezione = true;
			}
		}
		if (!znalezione) {
			cout << "Nie znam takiej liczby!\n";
		}
	}

	keep_window_open();
	return 0;
}