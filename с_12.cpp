#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int max, min, step;

	cout << "Ââåäèòå ìèíèìàëüíîå è ìàêñèìàëüíîå ÷èñëà è øàã\n";
	cin >> min >> max >> step;
	cout << min << " ";

	while (min < max) 
	{
		min += step;
		cout << min << " ";
	}

	return 0;
}