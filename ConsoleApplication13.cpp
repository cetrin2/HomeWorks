
#include "stdafx.h"


int main()
{
	//Объявляем массив
	int arr[100][100];

	//Объявляем переменные для размера массива
	int rows, cols;

	//Запрашиваем количество строк
	printf("Enter quantity of rows: ");
	scanf_s("%i", &rows);
	printf("\n\n");

	//Запрашиваем количество столбцов
	printf("Enter quantity of cols: ");
	scanf_s("%i", &cols);
	printf("\n\n");

	printf("Enter a values of array: \n");

	//Наполняем массив
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			scanf_s("%i", &arr[i][j]);
		}
	}

	//Выводим результат
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			printf("%3i", arr[i][j]);
		}

		printf("\n");
	}
}

