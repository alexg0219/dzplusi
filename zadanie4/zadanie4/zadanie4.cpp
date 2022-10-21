#include <iostream>

using namespace std;

int main()
{
	double v, t, u;
	const double g = 9.8;
	const double pi = asin(1);

	cout << "v= ";
	cin >> v;

	cout << "t= ";
	cin >> t;

	if (fabs(g * t / (2 * v)) > 1)
	{
		cout << "error!" << endl;
	}
	else
	{
		u = asin(g * t / (2 * v));
		cout << "Ugol = ";
		cout << u* (90 / pi) << endl;
	}
}
