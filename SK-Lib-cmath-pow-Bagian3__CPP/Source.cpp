
#include <iostream>
#include <conio.h>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
	double x = 9.6, y = 5.2;
	double hasil = pow(x, y);

	cout << "x = " << x << endl;
	cout << "y = " << y << endl << endl;

	cout << "Hasil = " << fixed << setprecision(2) << hasil << endl;

	_getch();
	return 0;
}
