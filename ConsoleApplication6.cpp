
#include "stdafx.h"

int main()
{
	//������ ��������� �������� ���������
	int hello_i = 0;
	int num_i = 0;
	int odd_number_i = 0;
	int sum = 0;

	//������� Hello ������ ���
	while (hello_i < 9)
	{
		printf("Hello\n");

		hello_i++;
	}

	
	//������� ����� �� 0 �� 15
	while (num_i <= 15)
	{
		printf("%i\n", num_i);

		num_i++;
	}

	//������� ����� �� 0 �� 15 (��������)
	while (odd_number_i <= 15)
	{
		if (odd_number_i % 2 > 0)
		{
			printf("%i\n", odd_number_i);
		}

		odd_number_i++;
	}

	//����� ��� ����� ������ ������������ ���� for, ��� ������� �� ����� ��������
	//������� ����� ����� �� 5 �� 15
	for (int i = 5; i <= 15; i++)
	{
		sum = sum + i;
	}

	printf("%i", sum);
}

