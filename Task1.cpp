#include <iostream>

using namespace std;

int main()
{
	int a, b, c;

	cout << "a = ";
	cin >> a;

	cout << "b = ";
	cin >> b;

	cout << "c = ";
	cin >> c;

	long double D = b * 1.0 * b - 4.0 * a * c;

	if (D < 0)
	{
		cout << "There is no answer";
	}
	else if (D == 0)
	{
		cout << -b * 1.0 / 2 * a;
	}
	else
	{
		cout << (-b * 1.0 - sqrt(D)) / 2 * a << endl << (-b * 1.0 + sqrt(D)) / 2 * a;
	}
}

