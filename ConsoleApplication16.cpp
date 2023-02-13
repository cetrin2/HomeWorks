#include "stdafx.h"
#include "stdlib.h"
#include "time.h"

int main()
{
	//Объявляем массив
	int arr[10][10];

	//Переменные для сортировки
	int tmp;

	bool fl = true;

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

	//Наполняем массив диапазон случайными цифрами
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arr[i][j] = rand() % 15;
		}
	}

	//Выводим массив в исходном состоянии
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			printf("%4i", arr[i][j]);
		}

		printf("\n");
	}

	printf("\n\n");

	//Делаем построчную сортировку
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

	//Выводим массив в отсортированном виде
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			printf("%4i", arr[i][j]);
		}

		printf("\n");
	}

	printf("\n\n");
	
	//Меняем местами первый и последний столбец
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

	//Выводим массив c результатом замены столбцов
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			printf("%4i", arr[i][j]);
		}

		printf("\n");
	}
}
