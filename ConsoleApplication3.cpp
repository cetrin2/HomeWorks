// ConsoleApplication3.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"


int main()
{
	//��������� ���������� ��� �������� ��������� ������
	long long int log;
	long long int pass;

	//�������� "�����"
	printf("Enter your login: ");
	scanf_s("%lli", &log);

	//�������� "������"
	printf("Enter your password: ");
	scanf_s("%lli", &pass);

	//��������� ������
	if (((log == 111) && (pass == 222)) || ((log == 333) && (pass == 444)))
	{
		printf("Data is correct");
	}
	else
	{
		printf("Data is wrong");
	}
}

