#include "stdafx.h"
#include "stdlib.h"
#include "time.h"
#include "windows.h"


int main()
{
	//��������� ������
	int arr[10][10];

	//���������� ��� ����������
	int tmp;

	bool fl = true;

	//��������� ���������� ��� ������� �������
	int rows, cols;

	//����������� ���������� �����
	printf("Enter quantity of rows: ");
	scanf_s("%i", &rows);
	printf("\n\n");

	//����������� ���������� ��������
	printf("Enter quantity of cols: ");
	scanf_s("%i", &cols);
	printf("\n\n");

	//��������� ������ �������� ���������� �������
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arr[i][j] = rand() % 15;
		}
	}

	//������� ������ � �������� ���������
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			printf("%4i", arr[i][j]);
		}

		printf("\n");
	}

	printf("\n\n");

	//������ ���������� ����������
	while (fl)
	{
		fl = false;


		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < cols - 1; j++)
			{
				if (arr[i][j] > arr[i][j + 1])
				{
					tmp = arr[i][j];
					arr[i][j] = arr[i][j + 1];
					arr[i][j + 1] = tmp;

					fl = true;
				}
			}
		}
	}

	//������� ������ � ��������������� ����
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			printf("%4i", arr[i][j]);
		}

		printf("\n");
	}

	printf("\n\n");
	
	//������ ������� ������ � ��������� �������
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (j == 0)
			{
				tmp = arr[i][j];
				arr[i][j] = arr[i][cols - 1];
				arr[i][cols - 1] = tmp;
			}
		}

		printf("\n");
	}

	//������� ������ c ����������� ������ ��������
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			printf("%4i", arr[i][j]);
		}

		printf("\n");
	}

	system("pause");
}