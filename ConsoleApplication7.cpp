
#include "stdafx.h"


int main()
{
	//������ ���������� ��� ���������� �����
	int num = 0;

	//������� ������� ��������� �� 5, �� 1 �� 10
	for (int i = 1; i <= 10; i++)
	{
		printf("5 * %i = %i\n", i, 5 * i);
	}

	//������� ���������� � �����, ���� �� ����� 7
	while (num != 7)
	{
		//�������� ����� �� ������������
		scanf_s("%i", &num);

		//����������, ������ ��� ������ ����
		if (num > 7)
		{
			printf("The number is greater than 7\n");
		}
		else if (num < 7)
		{
			printf("The number is less than 7\n");
		}

		//����������, ������ ��� ������ ������
		if (num > 10)
		{
			printf("The number is greater than 10\n");
		}
		else if (num < 10)
		{
			printf("The number is less than 10\n");
		}

		//���������� ������� �� �� ���
		if (num % 2 == 0)
		{
			printf("The number is divisible by two\n");
		}
		else
		{
			printf("The number is not divisible by two\n");
		}

		//���������� ������� �� �� ���
		if (num % 3 == 0)
		{
			printf("The number is divisible by three\n");
		}
		else
		{
			printf("The number is not divisible by three\n");
		}
	}
}

