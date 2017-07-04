#include<iostream>
using namespace std;

int main()
{
	//Пользователь вводит с клавиатуры символ.
	//Определить, какой это символ : Буква, цифра, знак препинания или другое.
	setlocale(LC_ALL, "RUS");
	char ch, answ='y';	
	
	while (answ != 'n' && answ !='N')
	{
		cout << "Please enter a char ";
		cin >> ch;
		if ((int)ch >= 32 && (int)ch <= 47)
			cout << ch << " is a symbol" << endl;
		else if ((int)ch >= 48 && (int)ch <= 57)
			cout << ch << " is a number" << endl;
		else if ((int)ch >= 58 && (int)ch <= 64)
			cout << ch << " is a symbol" << endl;
		else if ((int)ch >= 65 && (int)ch <= 90)
			cout << ch << " is a capital letter" << endl;
		else if ((int)ch >= 91 && (int)ch <= 96)
			cout << ch << " is a symbol" << endl;
		else if ((int)ch >= 97 && (int)ch <= 122)
			cout << ch << " is a lowercase letter" << endl;
		else if ((int)ch >= 123 && (int)ch <= 127)
			cout << ch << " is a symbol" << endl;
		else
		{
			system("cls");
			cout << "ERROR: Can\'t identificate char. Charcode " << (int)ch << endl;
			continue;
		}
			
		cout << "Once more(Y/N) ";
		cin >> answ;
		system("cls");
	}

	system("pause");
	return 0;
}