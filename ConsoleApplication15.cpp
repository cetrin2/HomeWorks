#include "stdafx.h"


int main()
{
	//��������� ������
	int arr[100][100];

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

	//��������� ������ �������� �� 0 �� 10
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			scanf_s("%i", &arr[i][j]);
		}
	}

	//������� ��������� ��������� �������
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			printf("%4i", arr[i][j]);
		}

		printf("\n");
	}

	printf("\n\n");

	//������ �������� ������� ���������
	for (int i = 0; i < rows / 2; i++)
	{
		int mRow = rows - i - 1;
		int mColumn = i;

		int tmp = arr[mRow][mColumn];

		arr[mRow][mColumn] = arr[mColumn][mRow];

		arr[mColumn][mRow] = tmp;
	}

	//������� ��������� ��������� �������
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			printf("%4i", arr[i][j]);
		}

		printf("\n");
	}
}