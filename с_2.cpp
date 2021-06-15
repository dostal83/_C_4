#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int Boxes, BoxCar;

	cout << "Ââåäèòå êîë-âî ÿùèêîâ íà ñêëàäå:\t";
	cin >> Boxes;

	for (int i = 1;; i++) 
	{
		cout << "Ñêîëüêî ÿùèêîâ ïîãðóçèòü â " << i<<" ìàøèíó:\t";
		cin >> BoxCar;

		Boxes -= BoxCar;
		if (Boxes < 0) 
		{
			Boxes += BoxCar;
			cout << "Âû íå ìîæåòå ïîãðóçèòü ñòîëüêî ÿùèêîâ. ßùèêîâ îñòàëîñü: " << Boxes << "\n";
			--i;
		}
		else
			cout << "ßùèêîâ îñòàëîñü: " << Boxes << endl;
		
		if (Boxes == 0) 
		{
			cout << "ßáëîêè çàêîí÷èëèñü";
			break;
		}
	}

	return 0;
}