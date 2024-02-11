#include<iostream>
#include<conio.h>
#include <math.h>
using namespace std;

#define UPPER_LEFT_ANGLE (char)218
#define UPPER_RITH_ANGLE (char)191
#define LOWER_LEFT_ANGLE (char)192
#define LOWER_RIGTH_ANGLE (char)217
#define HORISONTAL_LINE (char)196 << (char)196
#define VERTICAL_LINE (char)179
#define WITHE_BOX "\xDB\xDB"	//(char)219
#define BLACK_BOX "\x20\x20"	//(char)32

void Square()
{
	setlocale(LC_ALL, "");
	int n;
	cout << "Ведите размер фигуры: "; cin >> n;
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
}
void Triangle1()
{
	setlocale(LC_ALL, "");
	int n;
	cout << "Ведите размер фигуры: " ; cin >> n;
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
}
void Triangle2()
{
	setlocale(LC_ALL, "");
	int n;
	cout << "Ведите размер фигуры: "; cin >> n;
	for (int i = 0; i <= n; i++)
	{
		for (int j = i; j <= n; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
}
void Triangle3()
{
	setlocale(LC_ALL, "");
	int n;
	cout << "Ведите размер фигуры: "; cin >> n;
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j < i; j++) cout << "  ";
		for (int j = i; j < n; j++) cout << "* ";
		cout << endl;
	}
}
void Triangle4()
{
	setlocale(LC_ALL, "");
	int n;
	cout << "Ведите размер фигуры: "; cin >> n;
	for (int i = 0; i <= n; i++)
	{
		for (int j = i; j < n; j++)cout << "  ";
		for (int j = 0; j < i; j++)cout << "* ";
		cout << endl;
	}
}
void Rhomb() 
{
	setlocale(LC_ALL, "");
	int n;
	cout << "Ведите размер фигуры: "; cin >> n;
}
void Plus()
{
	setlocale(LC_ALL, "");
	int n;
	cout << "Ведите размер фигуры: "; cin >> n;
	for (int i = 0; i < n; i++) 
	{
		for (int j = 0; j < n; j++)
		{ 
			if ((i + j) % 2 == 0) cout << "+ ";
			else cout << "- ";
		}
		cout << endl;
	}
}
void Chess()
{
	setlocale(LC_ALL, "");
	int n;
	cout << "Введите число квадратов:\t"; cin >> n;
	setlocale(LC_ALL, "C");
	for (int i = 0; i <= n+1; i++)
	{
		for (int j = 0; j <= n+1; j++)
		{
			if (i == 0 && j == 0) cout << UPPER_LEFT_ANGLE;
			else if (i == 0 && j == n+1) cout << UPPER_RITH_ANGLE;
			else if (i == n+1 && j == 0) cout << LOWER_LEFT_ANGLE;
			else if (i == n+1 && j == n+1) cout << LOWER_RIGTH_ANGLE;
			else if (i == 0 || i == n+1) cout << HORISONTAL_LINE;
			else if (j == 0 || j == n+1) cout << VERTICAL_LINE;
			else if ((i + j) % 2 == 0)cout << WITHE_BOX;
			else if ((i + j) % 2 != 0)cout << BLACK_BOX;
			else cout << "  ";
		}
		cout << endl;
	}
}
void HardChess()
{
	setlocale(LC_ALL, "");
	int n;
	cout << "Введите  квадратов:\t"; cin >> n;
	setlocale(LC_ALL, "C");
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			for (int j = 0; j < n; j++)
			{
				if ((i + j) % 2 == 0) cout << "+ ";
				else cout << "- ";
			}
			for (int s = 0; s <= n; s++)
			{
				for (int m = 0; m <= n; m++)cout << " ";
			}
			//cout << endl;
		}
		cout << endl;
	}
}

void main()
{
	//Square();
	//Triangle1();
	//Triangle2();
	//Triangle3();
	//Triangle4();
	//Rhomb();
	//Plus();
	//Chess();
	HardChess();
}