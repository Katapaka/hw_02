#include<iostream>
using namespace std;
const int managers = 3;
//�������� ��������� ���������� 200$ + ������� �� ������.
//������� �� 500$ - 3 % , �� 500 �� 1000 � 5 % , ����� 1000 � 8 % .
//������������ ������ � ���������� ������� ������ ��� ���� ����������.
//���������� �� ��������, 
//���������� ������� ���������, 
//��������� ��� ������ 200$, 
//������� ����� �� �����.

int main()
{
	float salary = 200, managers_salary[managers];							//������ � �/� ����� ���������
	int selling[managers];													//����� ������ ����� ���������
	int max_Selling_Index = 0;
	setlocale(LC_ALL, "RUS");

																			//�������� �����
	for (int i = 0; i < managers; i++)
	{
		cout << "����i�� �i���� ������ ��� " << i+1 << "-�� ��������� ";
		cin >> selling[i];
	}

																			// ���������� �/�
	for (int i = 0; i < managers; i++)
	{
		if (selling[i] > 1000)
			managers_salary[i] = salary + (selling[i] * 0.8);
		else if (selling[i] >= 500)
			managers_salary[i] = salary + (selling[i] * 0.5);
		else 
			managers_salary[i] = salary + (selling[i] * 0.3);		
	}
																			// ����������� ������� ��������� �� ����������� ���� ���쳿. 
	for (int i = 0; i < managers; i++)
	{
		if (managers_salary[max_Selling_Index] < managers_salary[i])
			max_Selling_Index = i;
	}
	managers_salary[max_Selling_Index] += 200;
	cout << "\n\n�i���� ��������� " << max_Selling_Index + 1 << ". �i� ������ ����i� 200$" << endl;

																			// ��������� ����� �� �����
	for (int i = 0; i < managers; i++)
	{
		cout << i + 1 << " �������� ������ " << managers_salary[i] << " $ �/�" << endl;
	}


	cout << endl << endl;
	system("pause");
	return 0;
}