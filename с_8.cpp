#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");	srand(time(0));	int rnum = rand() % 100;	int attempts = 1, num;	cout << "Ó Âàñ 10 ïîïûòîê, ÷òîáû óãàäàòü ÷èñëî\n";	while (attempts < 11)	{		cin >> num;		if (num > rnum)			cout << "íàäî ìåíüøå\n";		else if (num < rnum)			cout << "íàäî áîëüøå\n";		else if (num = rnum)		{			cout << "×èñëî óãàäàíî!\n\n";			break;		}		cout << "Âû ïîòðàòèëè " << attempts << " ïîïûòîê\n";		++attempts;	}	if (attempts>=10)		cout << "\n\nÏîïûòêè çàêîí÷èëèñü, ÷èñëî íå óãàäàíî.\nÂåðíûé îòâåò:\t" << rnum<<"\n\n\n";	return 0;
}