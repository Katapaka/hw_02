#include<iostream>
using namespace std;
#define OPERATOR_COUNT 4																														// Кiлькiсть операторiв зв"язку

int main()
{
	//Написать программу подсчета стоимости разговора для разных мобильных операторов.
	//Пользователь вводит стоимость разговора и выбирает с какого на какой оператор он звонит.
	//Вывести стоимость на экран.
	setlocale(LC_ALL, "RUS");
																																				//Оголошення змiнних
	int op1, op2, timeH, timeM, timeS;																											//
	float mobile_operator[OPERATOR_COUNT][2];																									//Дохвимiрний масив тарифiв
	float total_time, total_cost;																												//

	cout << "Вiтаю!\nОсь список операторiв зв\'язку \n1 - Kyivstar\n2 - MTC\n3 - Life\n4 - Ukrtelecom\n\n";
	for(int i = 0; i < OPERATOR_COUNT; i++)																										//Цикл заповнення даними масива тарифiв
	{		
		cout << "Введiть тариф оператора " << i + 1 << " (в мережi) ";
		cin >> mobile_operator[i][0];
		cout << "Введiть тариф оператора " << i + 1 << " (на iнший оператор) ";
		cin >> mobile_operator[i][1];
		cout << endl;
	}


	system("cls");																																//Очищення екрану консолi
	cout << "1 - Kyivstar\n2 - MTC\n3 - Life\n4 - Ukrtelecom\n\n";																				//Виведення "шапки" пiдказок
	cout << "Виберiть оператор зв\'язку з якого хочете здiйснити дзвiнок ";
	cin >> op1;
	cout << "Виберiть оператор зв\'язку на який хочете здiйснити дзвiнок ";
	cin >> op2;
	cout << "Введiсть тривалiсть дзвiнка (ГГ ХХ СС) ";
	cin >> timeH >> timeM >> timeS;
	total_time = timeH * 60 + timeM + (float)timeS / 60;																						//Обчислення загального часу
	

	if (op1 == op2)																																//Визначення внутрiшнього чи зовнiшнього дзвiнка
		total_cost = mobile_operator[op1 - 1][0] * total_time;
	else
		total_cost = mobile_operator[op1 - 1][1] * total_time;

	cout << "\nЗагальна вартiсть дзвiнка з оператора "<< op1<< " на оператор "<< op2 << " - " << total_cost<< " грн.\n\n" << endl;				//Виведення пiдрахунку на екран
	
	system("pause");
	return 0;
}