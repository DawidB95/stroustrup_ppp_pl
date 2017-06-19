#include "../../std_lib_facilities.h"
void ziarno_1tys();
void ziarno_1milion();
void ziarno_1miliard();
int main() {
	cout << "Anegdota z szachami :)\n";
	cout << "Pole\t" << " Ziaro\t" << " Suma\n";
	//ziarno_1tys();
	//ziarno_1milion();
	ziarno_1miliard();
	keep_window_open();
	return 0;
}
void ziarno_1tys(){
	double pole = 1;
	double ziarno = 1;
	double sum = 0;
	while (sum <= 1000) {
		sum += ziarno;
		cout << pole << "\t" << ziarno << "\t" << sum << "\t" << endl;
		ziarno *= 2;
		pole++;
	}
}
void ziarno_1milion(){
	double pole = 1;
	double ziarno = 1;
	double sum = 0;
	while (sum <= 1000000) {
		sum += ziarno;
		cout << pole << "\t" << ziarno << "\t" << sum << "\t" << endl;
		ziarno *= 2;
		pole++;
	}
}
void ziarno_1miliard(){
	double pole = 1;
	double ziarno = 1;
	double sum = 0;
	while (sum <= 1000000000) {
		sum += ziarno;
		cout << pole << "\t" << ziarno << "\t" << sum << "\t" << endl;
		ziarno *= 2;
		pole++;
	}
}