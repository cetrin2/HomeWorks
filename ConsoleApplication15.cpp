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

	//Наполняем массив диапазон данными с клавиатуры
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			scanf_s("%i", &arr[i][j]);
		}
	}

	//Выводим результат исходного массива
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			printf("%4i", arr[i][j]);
		}

		printf("\n");
	}

	printf("\n\n");

	//Далаем инверсию главной диагонали
	for (int i = 0; i < rows / 2; i++)
	{
		int mRow = rows - i - 1;
		int mColumn = i;

		int tmp = arr[mRow][mColumn];

		arr[mRow][mColumn] = arr[mColumn][mRow];

		arr[mColumn][mRow] = tmp;
	}

	//Выводим измененный результат
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			printf("%4i", arr[i][j]);
		}

		printf("\n");
	}
}
