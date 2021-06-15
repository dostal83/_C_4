#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int x, y;
	cout << "Ââåäèòå íàòóðàëüíîå ÷èñëî: ";
	cin >> x;

	y = x % 10;
	x = x / 10;

	while (x > 0)
	{
		if (x % 10 > y)
			y = x % 10;
		x /= 10;
	}
	cout << "Íàèáîëüøàÿ öèôðà â âàøåì ÷èñëå: " << y;
	
	return 0;
}