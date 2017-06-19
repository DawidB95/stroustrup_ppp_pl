#include "../../std_lib_facilities.h"

void punktacja(int,int);
void kamien();
void papier();
void nozyce();
void komp_kamien();
void komp_papier();
void komp_nozyce();
void menu();
void poziom();


int main() {
	//menu();
	poziom();
	//int wybor_komp = poziom();
	//int punkty_moje = 0;
	//int punkty_komputera = 0;
	//int op = 0;
	//cin >> op;
	//switch (op)
	//{
	//case 1:
	//	papier();
	//	break;
	//case 2:
	//	kamien();
	//	break;
	//case 3:
	//	nozyce();
	//	break;
	//default:
	//	cout << "Nie znam takiej komendy!\n";
	//	break;
	//}
	//switch (wybor_komp)
	//{
	//case 1:
	//	komp_papier();
	//	break;
	//case 2:
	//	komp_kamien();
	//	break;
	//case 3:
	//	komp_nozyce();
	//	break;
	//}
	//if (op == wybor_komp) {
	//	cout << "Remis!" << endl;
	//}
	//else {
	//	if ((3 + op - wybor_komp) % 3 == 2) {
	//		punkty_moje++;
	//		cout << "Wygrana!" << endl;
	//	}
	//	else if ((3 + op - wybor_komp) % 3 == 1) {
	//		punkty_komputera++;
	//		cout << "Przegrana!" << endl;
	//	}
	//}
	//punktacja(punkty_moje, punkty_komputera);
	keep_window_open();
	return 0;
}
void menu() {
	
	cout << "Witaj, w grze kamien, papier, nozyce\n";
	cout << "[1] Papier\n";
	cout << "[2] Kamien\n";
	cout << "[3] Nozyce\n";
}
void punktacja(int a, int b) {
	cout << "Twoje punkty: " << a << endl;
	cout << "Punkty komputera: " << b << endl;
}
void poziom() {
	int numbers;
	vector<int>poziom;
	while (cin >> numbers)
		poziom.push_back(numbers);
	for (int i = 0; i < poziom.size(); i++) {
		poziom[i] = poziom[i] % 3 + 1;
	}
	for (int i = 0; i < poziom.size(); i++) {
		cout << poziom[i] << endl;
	}
	
}
void kamien() { cout << "Wybrales kamien\n"; }
void papier() { cout << "Wybrales papier\n"; }
void nozyce() { cout << "Wybrales nozyce\n"; }
void komp_kamien() { cout << "Komputer wybral kamien\n"; }
void komp_papier() { cout << "Komputer wybral papier\n"; }
void komp_nozyce() { cout << "Komputer wybral nozyce\n"; }