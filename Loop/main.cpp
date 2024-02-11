#include<iostream>
#include<conio.h>
using namespace std;

//#define WHILE_1
//#define WHILE_2
#define Do_WHILE

void main()
{
	setlocale(LC_ALL, "");
#if defined WHILE_2
	int i = 0;
	int n;
	cout << " "; cin >> n;
	while (i < n)
	{
		cout << i++ << "Hello" << endl;
	}

	int n;
	cout << "Введите количество итераций"; cin >> n;
	while (n--)
	{
		cout << n << "\t";
	}
	cout << endl;
#endif
#if define Do_WHILE
#define Escape 27

	char key;
	do
	{
		key = _getch();
		cout << (int)key << "\t" << key << endl;
	} while (key != Escape);
#endif
}