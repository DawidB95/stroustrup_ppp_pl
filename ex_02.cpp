#include "../../std_lib_facilities.h"
int main() {
	vector<double> temps;
	double temp = 0;
	while (cin >> temp) {temps.push_back(temp);	}
	double sum = 0;
	for (int i = 0; i < temps.size(); i++) {
		sum += temps[i];
	}
	cout << "Srednia wynosi: " << sum / temps.size() << endl;
	sort(temps.begin(), temps.end());
	if (temps.size() % 2 == 0) { cout<<"Mediana wynosi: "<<(temps[temps.size() / 2 - 1] + temps[temps.size() / 2])/2<<" z liczb " 
		<< temps[temps.size() / 2 - 1] << " i " << temps[temps.size() / 2] << endl; }
	else cout <<"Mediana wynosi: "<< temps[temps.size() / 2] << endl;
	keep_window_open();
	return 0;
}
