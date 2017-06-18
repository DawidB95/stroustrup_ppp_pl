#include "../../std_lib_facilities.h"
//int square(int x)
//{
//	int sum = 0;
//	for (int i = 0; i < x; i++) {
//		sum += x;
//	}
//	return sum;
//}
int main() {
	double roznica = 1.0 / 100.0;
	char op= ' ';
	double val1 = 0;
	double val2 = 0;
	cout << "Wcisnij jakis znak aby zaczac lub '|' aby zakonczyc.\n";
	while (cin>>op)
	{
		
		if (op == '|') { break; }
		else
		{
			cout << "Podaj dwie liczby calkowite: \n";
			cin >> val1 >> val2;
			(val1 > val2) ? cout << val1<<" jest wieksze od "<<val2<<endl : (val1 == val2) ? cout << "Liczby sa rowne\n" : 
				cout << val2<<" jest wieksze od "<<val1<<endl;
			if (abs(val1-val2)<=roznica) { cout << "Liczby sa prawie rowne\n"; }
			cout << "Wcisnij jakis znak aby zaczac lub '|' aby zakonczyc.\n";
		}

	}
	keep_window_open();
	return 0;
}