#include<iostream>
#include<conio.h>
#include <math.h>
using namespace std;


void Action()
{
	setlocale(LC_ALL, "");
	double num;
	int degree;
	double answer = 1;
	cout << "������� �����" << endl; cin >> num;
	cout << "������� �������" << endl; cin >> degree;
	if (degree < 0)
	{
		num = 1 / num;
		degree = -degree;
	}
	for (int i = 1; i < degree; i++)
	{
		answer *= num;
	}
	cout << "�����:\t" << answer << endl;
}
void Table()
{
		setlocale(LC_ALL, "C");
		for (int i = 0; i < 256; i++) 
		{
			if (i % 16 == 0) cout << endl;
			cout << (char)i<< " ";
		}
}
void fibonachi()
{
	setlocale(LC_ALL, "");
	int i;
	int a = 0;
	int b = 1;
	int num =0;
	cout << "������� ����������� ��������� ������ ���� ��������" << endl; cin >> i;
	for (int n = 0; n < i; n++)
	{
		cout << num << "  ";
		a = num + b;
		num = b;
		b = a;
	}
}
void SimpeNumbers()
{
	setlocale(LC_ALL, "");
	int i,m;
	cout << "������� ������ ���� ������� ����� " << endl; cin >> m;
	for (int i = 0; i <= m; i++)
	{
		bool s = true;
		for (int j = 2; j < i; j++) 
		{
			if (i%j==0)
			{
				s = false;
				break;
			}
		}
		if (s)cout << i << "\t";
	}
}
void main()
{
	//Action ();
	//Table ();
	//fibonachi();
	SimpeNumbers();
}