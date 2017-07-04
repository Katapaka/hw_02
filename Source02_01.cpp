#include<iostream>
using namespace std;
const int managers = 3;
//Зарплата менеджера составляет 200$ + процент от продаж.
//Продажи до 500$ - 3 % , от 500 до 1000 – 5 % , свыше 1000 – 8 % .
//Пользователь вводит с клавиатуры уровень продаж для трех менеджеров.
//Определить их зарплату, 
//определить лучшего менеджера, 
//начислить ему премию 200$, 
//вывести итоги на экран.

int main()
{
	float salary = 200, managers_salary[managers];							//ставка і з/п трьох менеджерів
	int selling[managers];													//рівень продаж трьох менеджерів
	int max_Selling_Index = 0;
	setlocale(LC_ALL, "RUS");

																			//введення даних
	for (int i = 0; i < managers; i++)
	{
		cout << "Введiть рiвень продаж для " << i+1 << "-го менеджера ";
		cin >> selling[i];
	}

																			// обчислення з/п
	for (int i = 0; i < managers; i++)
	{
		if (selling[i] > 1000)
			managers_salary[i] = salary + (selling[i] * 0.8);
		else if (selling[i] >= 500)
			managers_salary[i] = salary + (selling[i] * 0.5);
		else 
			managers_salary[i] = salary + (selling[i] * 0.3);		
	}
																			// знаходження кращого менеджера та нарахування йому премії. 
	for (int i = 0; i < managers; i++)
	{
		if (managers_salary[max_Selling_Index] < managers_salary[i])
			max_Selling_Index = i;
	}
	managers_salary[max_Selling_Index] += 200;
	cout << "\n\nВiтаємо менеджера " << max_Selling_Index + 1 << ". Вiн отримує премiю 200$" << endl;

																			// виведення даних на екран
	for (int i = 0; i < managers; i++)
	{
		cout << i + 1 << " менеджер отримує " << managers_salary[i] << " $ з/п" << endl;
	}


	cout << endl << endl;
	system("pause");
	return 0;
}