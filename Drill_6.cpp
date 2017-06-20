#include "../../std_lib_facilities.h"

int main() {
	double val = 0;
	int max = INT_MIN;
	int min=INT_MAX ;
	while (cin >> val) {
		if (val < min)	{min = val;}
		if (val > max) 	{max = val;}
		cout << min << " byla do tej pory najmniejsza!\n";
		cout << max << " byla do tej pory najwieksza!\n";
	}
	keep_window_open();
	return 0;
}
