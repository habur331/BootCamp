#include <iostream>
#include <cmath>

using namespace std;

struct node
{
	double x, y;
};

int main()
{
	node a, b, c;

	cin >> a.x >> a.y >> b.x >> b.y >> c.x >> c.y;

	double len[3] =
	{
	sqrt(pow(abs(a.x - b.x), 2) + pow(abs(a.y - b.y), 2)),
	sqrt(pow(abs(b.x - c.x), 2) + pow(abs(b.y - c.y), 2)),
	sqrt(pow(abs(c.x - a.x), 2) + pow(abs(c.y - a.y), 2))
	};


	if (len[0] + len[1] <= len[2] || len[1] + len[2] <= len[0] || len[0] + len[2] <= len[1])
	{
		cout << "That triangle can not exist";
		return 0;
	}
	else
	{
		double p = (len[0] + len[1] + len[2]) / 2;
		cout << sqrt(p * (p - len[0]) * (p - len[1]) * (p - len[2]));
	}


}

