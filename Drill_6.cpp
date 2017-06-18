#include "../../std_lib_facilities.h"

int main() {
	double val = 0;
	double max = 0;
	double min = 0;
	while (cin >> val) {
		(val > max) ? max = val : min = val;
		cout << min << " byla do tej pory najmniejsza!\n";
		cout << max << " byla do tej pory najwieksza!\n";
	}
	keep_window_open();
	return 0;
}