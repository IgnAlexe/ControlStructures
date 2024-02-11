#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	cout << "Hello controls" << endl;
	int temperature;
	cout << " Введите температуру"; cin >> temperature;
	if (temperature > 60)
	{
		cout << "Вы на другой планете";
	}
	else if (temperature > 35)
	{
		cout << "Жарко" << endl;
	}
	else if (temperature > 15)
	{
		cout << "Тепло" << endl;
	}
	else if (temperature >= 0)
	{
		cout << "Прохладно" << endl;
	}
	else if (temperature < -10)
	{
		cout << "Холоно" << endl;
	}
	else if (temperature < -40)
	{
		cout << "Сильный мороз" << endl;
	}

	
}
	/*if (temperature > 0 && temperature == 40)
	{
		cout << "На улице тепло " << endl;
	}

	else
	{
		cout << " На улице холодно" << endl;
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


