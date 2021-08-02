#include <iostream>
#include <cmath>

using namespace std;

int nod(int a, int b)
{
	while (a * b != 0)
	{
		a %= b;
		swap(a, b);
	}

	return a + b;
}

int main()
{

}

