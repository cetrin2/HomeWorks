// ConsoleApplication19.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "stdlib.h"
#include "time.h"

void fill_array(int arr[], int size)
{
	//Заполняем случайными значениями
	for (int i = 0; i < size - 1; i++)
	{
		arr[i] = rand() % 15;
	}

	//Выводим результат
	for (int i = 0; i < size - 1; i++)
	{
		printf("%3i", arr[i]);
	}
}

int main()
{
	//Размер массива
	const int i = 5;
	const int j = 8;

	//Инициализация массивов
	int arr_o[i] = {};
	int arr_s[j] = {};

	//Заполнение через функцию
	fill_array(arr_o, i);

	printf("\n");

	//Заполнение через функцию
	fill_array(arr_s, j);

}

