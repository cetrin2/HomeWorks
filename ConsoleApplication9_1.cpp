

#include "stdafx.h"


int main()
{
	int num_values;				//���������� �������� ��������
	int cur_value;				//������� ��������
	int min_value;				//����������� ��������
	int max_value;				//����������� ��������
	int sum_values = 0;			//�����
	float average_value = 0;	//�������

	//������ ������ ���������� ��������
	printf("Enter the number of values: ");
	scanf_s("%i", &num_values);

	for (int i = 0; i < num_values; i++)
	{
		scanf_s("%i", &cur_value);

		//���������� ������ �������� ��� ������������ ���������
		if (i == 0)
		{
			min_value = cur_value;
			max_value = cur_value;
		}

		//���� ��������� �������� ������ ����������� - ����������
		if (cur_value < min_value)
		{
			min_value = cur_value;
		}

		//���� ��������� �������� ������ ����������� - ����������
		if (cur_value > max_value)
		{
			max_value = cur_value;
		}

		//���������� ����� ����� ����� �������� ������ �������� �����
		sum_values += cur_value;
	}

	//���������� �������
	average_value = (float)sum_values / (float)num_values;

	printf("The min value is %i\n", min_value);
	printf("The max value is %i\n", max_value);
	printf("The sum of values is %i\n", sum_values);
	printf("The average is %f\n", average_value);
}

