#include "stdafx.h"
#include "stdlib.h"
#include "time.h"


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

	//printf("Enter a values of array: \n");

	//��������� ������
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arr[i][j] = rand() % 10 + (-2);
		}
	}

	//������� ���������
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			printf("%7i", arr[i][j]);
		}

		printf("\n");
	}
}