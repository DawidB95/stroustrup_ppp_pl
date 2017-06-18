#include "../../std_lib_facilities.h"
#include <Windows.h>
string menu();
int main() {
	vector<int>numbers(7);
	numbers[0] = 50;
	numbers[1] = 25;
	numbers[2] = 12;
	numbers[3] = 6;
	numbers[4] = 3;
	numbers[5] = 2;
	numbers[6] = 1;
	int proba = 0;
	char op = ' ';
	string imie=menu();
	while (op != 't') {
		++proba;
		cout << "Czy twoja liczba to " << numbers[0] << endl;
			//<< "?\nJezeli tak to wpisz 't' jezeli mniejsza 'm' lub 'w' jezeli wieksza.\n ";
		cin >> op;
		switch (op)
		{

		case 'w':
			if (proba <= numbers.size())
				numbers[0] += numbers[proba];
			break;
		case 'm':
			if (proba <= numbers.size())
				numbers[0] -= numbers[proba];
			break;
		case 't':
			break;
		default:
			cout << "To nie jest poprawna odpowiedz, uzyj 'p', 't' lub 'n'\n";
			--proba;
			break;
		}
		if (numbers[0] >= 100 || numbers[0] < 1)
		{
			cout << "Twoja liczba musi byc z przedzialu od 1 do 100!\n";
			return 0;
		}
		if (proba == 7 && op != 't') {
			cout << "No nie udalo sie :(\n";
			return 0;
		}
	}
	cout<<imie << ", udalo Ci sie za " << proba << " razem, znalezc liczbe " << numbers[0] <<"\nGRATULACJE!"<< endl;
	keep_window_open();
	return 0;
}
string menu()
{
	string imie = "";
	cout << "Podaj swoje imie: \n";
	cin >> imie;
	system("cls");
	cout << "Witaj, " << imie << "\n";
	cout << "Przygotuj sie do gry :)" << endl;
	cout << "Pomysl o liczbie z zakresu od 1 do 100.\n";
	Sleep(10000);
		system("cls");
		cout << "Jezeli twoja liczba wyswietli sie, wpisz 't'\n"
			<< "Jezeli twoja liczba jest wieksz wpisz 'w'\n"
		<< "Jezeli jest mniejsza to wpisz 'm'\n"
		<< "\tPowodzenia!\n";
		return imie;
}