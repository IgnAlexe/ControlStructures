#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	cout << "Hello controls" << endl;
	int temperature;
	cout << " ������� �����������"; cin >> temperature;
	if (temperature > 60)
	{
		cout << "�� �� ������ �������";
	}
	else if (temperature > 35)
	{
		cout << "�����" << endl;
	}
	else if (temperature > 15)
	{
		cout << "�����" << endl;
	}
	else if (temperature >= 0)
	{
		cout << "���������" << endl;
	}
	else if (temperature < -10)
	{
		cout << "������" << endl;
	}
	else if (temperature < -40)
	{
		cout << "������� �����" << endl;
	}

	
}
	/*if (temperature > 0 && temperature == 40)
	{
		cout << "�� ����� ����� " << endl;
	}

	else
	{
		cout << " �� ����� �������" << endl;
	}
	*/

/*if (Condition)
{
	.....;
	code_1;
	.....;
}
else
{
	...;
	code_2;
	...;
}
*/


