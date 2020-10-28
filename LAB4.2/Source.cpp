#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

	double x, xp, xk, dx, A, B, y;

	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;

	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |" << setw(7) << "y" << " |" << endl;
	cout << "---------------------------" << endl;

	x = xp;

	while (x <= xk)
	{
		A = 2 + fabs(5 - x);
		if (x <= -1)
			B = exp(fabs(2 + x));
		else
			if (-1 < x && x < 1)
				B = sin(1 / (fabs(2 + x))) * sin(1 / (fabs(2 + x)));
			else
				B = cos(x) * cos(x) / 1 + fabs(sin(x));
		y = A + B;

		cout << "|" << setw(7) << setprecision(3) << x << " |" << setw(10) << setprecision(3) << y << " |" << endl;
		x += dx;
	}
	cout << "---------------------------" << endl;

	return 0;
}
