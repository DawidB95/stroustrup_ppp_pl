#include "../../std_lib_facilities.h"
void dodawanie(double,double);
void odejmowanie(double, double);
void dzielenie(double, double);
void mnozenie(double, double);
int main() {
	double val1 = 0;
	double val2 = 0;
	char op = ' ';
	cout << "Podaj dwie liczby, a nastepnie znak dzialania (+,-,/,*) np. 2 3 *\n";
	while (cin >> val1 >> val2 >> op) {
		switch (op)
		{
		case'+':
			dodawanie(val1, val2);
			break;
		case '-':
			odejmowanie(val1, val2);
			break;
		case'/':
			dzielenie(val1, val2);
			break;
		case '*':
			mnozenie(val1, val2);
			break;
		default:
			cout << "Nie znam takiego znaku. Wpisz (+,-,/,*)\n";
			break;
		}
	}
	keep_window_open();
	return 0;
}
void dodawanie(double a, double b) {
	cout << "Suma liczb "<<a<<" i "<<b<<" wynosi "<<a + b << endl;
}
void odejmowanie(double a, double b) {
	cout << "Roznica liczb " << a << " i " << b << " wynosi " << a - b << endl;
}
void dzielenie(double a, double b) {
	if (b == 0) { cout << "Nie mozna dzielic przez 0!\n"; }
	else cout << "Iloraz liczb " << a << " i " << b << " wynosi " << a / b << endl;
	
}
void mnozenie(double a, double b) {
	cout << "Iloczyn liczb " << a << " i " << b << " wynosi " << a * b << endl;
}