
#include "stdafx.h"


int main()
{
	//������� ������
	int arr[7];

	printf("Enter the values of array\n");

	//�������� �������� �� ������������
	for (int i = 0; i < 7; i++)
	{
		scanf_s("%i", &arr[i]);
	}

	printf("you have entered values: ");

	//������� ���������
	for (int i = 0; i < 7; i++)
	{
		printf("%2i\n", arr[i]);
	}


	int n;				//���������� ��� �������� ������� �������
	int arr_b[100];		//������� ������ �������� �������

	//�������� ������ �� ������������
	printf("Enter the size of array not more than 100:");
	scanf_s("%i", &n);

	//��������� ����� ������ ������� ��� �� ������ ������������� �������
	if (n <= 100)
	{
		printf("Enter the values of array\n");

		//�������� �������� �� ������������
		for (int i = 0; i < n; i++)
		{
			scanf_s("%i", &arr_b[i]);
		}

		printf("you have entered values: ");

		//������� ��������
		for (int i = 0; i < n; i++)
		{
			printf("%2i", arr_b[i]);
		}
	}
	else
	{
		printf("The size of array is more than 100");
	}
}

