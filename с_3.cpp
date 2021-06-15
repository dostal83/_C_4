#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");	int OpenDiap, EndDiap, oddnum = 0, oddsum = 0;	cout << "Ââåäèòå íà÷àëî äèàïàçîíà : ";
	cin >> OpenDiap;
	cout << "\nÂâåäèòå êîíåö äèàïàçîíà : ";
	cin >> EndDiap;	int i = OpenDiap;	while (OpenDiap <= EndDiap)	{		if (OpenDiap % 2 != 0)		{			cout << OpenDiap << "\n";			++oddnum;			oddsum += OpenDiap;		}		++OpenDiap;	}

	cout << oddnum << " íå÷åòíûõ ÷èñåë â ñóììå " << oddsum;

	return 0;
}
