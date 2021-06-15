#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int visitors, maxAge = 0, minAge = 1000, ageVisitor, sum = 0;

	cout << "Ââåäèòå êîë-âî ïîñåòèòåëåé: ";
	cin >> visitors;

	for (int i = 1; i <= visitors; i++) 
	{
		cout << "\nÂâåäèòå âîçðàñò " << i << ":\t";
		cin >> ageVisitor;

		if (ageVisitor > maxAge) 
			maxAge = ageVisitor;
		
		if (ageVisitor < minAge) 
			minAge = ageVisitor;
		
		sum += ageVisitor;
	}

	cout << "\nÑàìûé áîëüøîé âîçðàñò: " << maxAge;
	cout << "\nÑàìûé ìàëåíüêèé âîçðàñò: " << minAge;
	cout << "\nÑðåäíèé âîçðàñò: " << sum / visitors;

	return 0;
}