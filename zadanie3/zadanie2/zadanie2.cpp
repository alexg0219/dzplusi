#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	int a, b, c;

	cout << "Введите число не больше 99: ";
	cin >> a;
	b = a % 10;
	c = a / 10;

	if (b > c)
	{
		cout << b;
		cout << " - большая цифра" << endl;
		cout << c;
		cout << " - меньшая цифра" << endl;
	}

	if (b < c)
	{
		cout << c;
		cout << " - большая цифра" << endl;
		cout << b;
		cout << "- меньшая цифра" << endl;
	}

	if (b == c)
	{
		cout << "Одинаковые цифры" << endl;
	}


}