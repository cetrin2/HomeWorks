#include "stdafx.h"

int main()
{
	int num_values;				//���������� �������� ��������
	int min_value;				//����������� ��������
	int max_value;				//����������� ��������
	int sum_values = 0;			//�����
	float average_value = 0;	//�������

	//������ ������ ���������� ��������
	printf("Enter the number of values: ");
	scanf_s("%i", &num_values);

	//������� ������ �� ������ ���������� ���������� ���������
	int numbers[100];

	//�������� �������� �� ������������ � �������� � ������ ���������� ��������� ��������
	for (int i = 0; i < num_values; i++)
	{
		scanf_s("%i", &numbers[i]);

		//���������� ������ �������� ��� ������������ ���������
		if (i == 0)
		{
			min_value = max_value = numbers[i];
		}

		//��������� ������ �� ��������� ��������, ���� �� - ����������
		if (min_value > numbers[i])
		{
			min_value = numbers[i];
		}

		//��������� ������ �� ��������� ��������, ���� �� - ����������
		if (max_value < numbers[i])
		{
			max_value = numbers[i];
		}

		//������� ����� �������� ��������
		sum_values += numbers[i];

		//������� ������� ��������������
		average_value = (float)sum_values / (float)num_values;
	}

	printf("\n\n");

	printf("The min value is %i\n", min_value);
	printf("The max value is %i\n", max_value);
	printf("The sum of values is %i\n", sum_values);
	printf("The average is %f\n", average_value);
}