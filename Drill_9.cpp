#include "../../std_lib_facilities.h"
double conv(double v, string u) {
	double m = 1;
	double cal_na_cm = 2.54;
	double st_na_cal = 12;
	double cm_na_m = 0.01;
		if (u == "m") { return v * m; }
		else if (u == "cal") { return v*cal_na_cm; }
		else if (u == "cm") { return v*cm_na_m; }
		else if (u == "st") { return v*st_na_cal; }
		else { cout << "Nie znam takiej jednostki!\n"; }
}
string convm(string u) {
	while (u != "m") {
		if (u == "st") { u = "cal"; return u; }
		else if (u == "cal") { u = "cm"; return u; }
		else if (u == "cm") { u = "m"; return u; }
		else if (u == "m") {
			break;
		}
	}
}
		
//string konvwersja(string u) {
//	vector<string>units(4);
//	units[0] = "m";
//	units[1] = "cm";
//	units[2] = "cal";
//	units[3] = "st";
//	if (u == "m") return units[0];
//	else return konvwersja();
//}
int main() {

	double val = 0;
	double number_after_conv = 0;
	string unit_after_conv = "";
	string unit = "st";
	cout << "Podaj liczbe, a nastepnie jednostke.\n";
	/*cin >> val >> unit;*/
	cout << convm(unit) << endl;

	//	if (unit == "st") {
	//		number_after_conv = conv(val, unit);
	//		unit_after_conv = convm(unit);
	//		number_after_conv = conv(number_after_conv, unit_after_conv);
	//		unit_after_conv = convm(unit_after_conv);
	//		cout<<conv(number_after_conv, unit_after_conv)<<" "<< convm(unit_after_conv)<<endl;
	//	}
	//	else if (unit == "cal") {
	//		number_after_conv = conv(val, unit);
	//		unit_after_conv = convm(unit);
	//		cout << conv(number_after_conv, unit_after_conv) << " " << convm(unit_after_conv) << endl;
	//	}
	//	else if (unit == "cm") {
	//		number_after_conv = conv(val, unit);
	//		unit_after_conv = convm(unit);
	//		cout << number_after_conv << " " << unit_after_conv << endl;
	//	}
	//	else {
	//		cout << val << " " << unit << endl;
	//	}
	//	
		//cout << number_after_conv << " " << unit_after_conv << endl;

		

	keep_window_open();
	return 0;
}
