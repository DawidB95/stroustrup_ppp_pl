#include "../../std_lib_facilities.h"
int main() {
	vector<double> temps;
	double temp = 0;
	double mean = 0;
	double sum = 0;

	while (cin >> temp) {temps.push_back(temp);	}
	if (temps.size() == 0)
		error("Brak danych!");
	for (int i = 0; i < temps.size(); i++) {
		sum += temps[i];
	}
	cout << "Srednia wynosi: " << sum / temps.size() << endl;
	sort(temps.begin(), temps.end());
	cout << "Najmniejsza odleglosc: " << temps[0] << "\nNajwieksza odleglosc: " << temps[temps.size() - 1];
	cout << "\nCaly systans: " << sum << endl;
	keep_window_open();
	return 0;
}