#include<iostream>
using namespace std;
#define OPERATOR_COUNT 4																														// �i���i��� ��������i� ��"����

int main()
{
	//�������� ��������� �������� ��������� ��������� ��� ������ ��������� ����������.
	//������������ ������ ��������� ��������� � �������� � ������ �� ����� �������� �� ������.
	//������� ��������� �� �����.
	setlocale(LC_ALL, "RUS");
																																				//���������� ��i����
	int op1, op2, timeH, timeM, timeS;																											//
	float mobile_operator[OPERATOR_COUNT][2];																									//������i���� ����� �����i�
	float total_time, total_cost;																												//

	cout << "�i���!\n��� ������ ��������i� ��\'���� \n1 - Kyivstar\n2 - MTC\n3 - Life\n4 - Ukrtelecom\n\n";
	for(int i = 0; i < OPERATOR_COUNT; i++)																										//���� ���������� ������ ������ �����i�
	{		
		cout << "����i�� ����� ��������� " << i + 1 << " (� �����i) ";
		cin >> mobile_operator[i][0];
		cout << "����i�� ����� ��������� " << i + 1 << " (�� i���� ��������) ";
		cin >> mobile_operator[i][1];
		cout << endl;
	}


	system("cls");																																//�������� ������ ������i
	cout << "1 - Kyivstar\n2 - MTC\n3 - Life\n4 - Ukrtelecom\n\n";																				//��������� "�����" �i������
	cout << "�����i�� �������� ��\'���� � ����� ������ ��i������ ���i��� ";
	cin >> op1;
	cout << "�����i�� �������� ��\'���� �� ���� ������ ��i������ ���i��� ";
	cin >> op2;
	cout << "����i��� ������i��� ���i��� (�� �� ��) ";
	cin >> timeH >> timeM >> timeS;
	total_time = timeH * 60 + timeM + (float)timeS / 60;																						//���������� ���������� ����
	

	if (op1 == op2)																																//���������� �����i������ �� ����i������ ���i���
		total_cost = mobile_operator[op1 - 1][0] * total_time;
	else
		total_cost = mobile_operator[op1 - 1][1] * total_time;

	cout << "\n�������� ����i��� ���i��� � ��������� "<< op1<< " �� �������� "<< op2 << " - " << total_cost<< " ���.\n\n" << endl;				//��������� �i�������� �� �����
	
	system("pause");
	return 0;
}