#include <iostream>

using namespace std;

int main()
{
	int a, s, r = 1;

	cout << "Enter number: " << endl;;
	cin >> a;

	cout << "Enter power: ";
	cin >> s;

	for (int i = 1; i <= s; i++)
	{
		r = r * a;
	}

	cout << "Number = ";
	cout << r << endl;
}