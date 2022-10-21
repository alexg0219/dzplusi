#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	int n, k;

	int a = 0;

	cout << "Введите N: ";
	cin >> n;
	cout << "Введите степень k: ";
	cin >> k;

	for (int i = 1; i <= n; i++)
	{
		a = a + pow(i, k);
	}

	cout << "Сумма: ";
	cout << a << endl;
}
