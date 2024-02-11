#include<iostream>
#include<conio.h>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
#define Escape 27
/*#define KeyW 87
#define KeyA 65
#define KeyS 83
#define KeyD 68
#define Keyw 119 
#define Keya 97 
#define Keys 115 
#define Keyd 100 */
#define Space 32
#define Enter 13
#define ArrowU 72
#define ArrowD 80
#define ArrowR 77
#define ArrowL 75
	char key;
	do
	{
		key = _getch();
		//cout << (int)key << "\t" << key << endl;
		/*if ((int)key == KeyW || (int)key == Keyw)
		{
			cout << "Вперед" << endl;
		}
		if ((int)key == KeyA || (int)key == Keya)
		{
			cout << "Влево" << endl;
		}
		if ((int)key == KeyS || (int)key == Keys)
		{
			cout << "Назад" << endl;
		}
		if ((int)key == KeyD || (int)key == Keyd)
		{
			cout << "Вправо" << endl;
		}
		if ((int)key == Space)
		{
			cout << "Прыжок" << endl;
		}
		if ((int)key == Enter)
		{
			cout << "Выстрел" << endl;
		}*/
		
		if (key == 'a' || key == 'A' || key == ArrowL) cout << "Влево" << endl;
		else if (key == 'w' || key == 'W' || key == ArrowU) cout << "Вперед" << endl;
		else if (key == 's' || key == 'S' || key == ArrowD) cout << "Назад" << endl;
		else if (key == 'd' || key == 'D' || key == ArrowR) cout << "Впрово" << endl;
		else if  (key == Space) cout << "Прыжок" << endl;
		else if (key == Enter) cout << "Огонь" << endl;
		else if (key != Escape && key != -32) cout << "Error" << endl;
	} while (key != Escape);

}
