

#include "stdafx.h"


int main()
{
	int n;				//Переменная для хранения размера массива
	int arr[100];			//Создаем массив большого размера
	int buf_arr;			//Буфер для массива
	bool fl = true;			//Флаг для цикла в несколько проходов

	//Получаем данные от пользователя
	printf("Enter the size of array not more than 100:");
	scanf_s("%i", &n);

	//Проверяем чтобы размер массива был не больше максимального размера
	if (n <= 100)
	{
		printf("Enter the values of array\n");

		//Получаем значения от пользователя
		for (int i = 0; i < n; i++)
		{
			scanf_s("%i", &arr[i]);
		}

		//Выполняем пока есть элементы в массиве
		while (fl)
		{
			fl = false;

			//Сортируем от меньшего к большему
			for (int i = 0; i < n - 1; i++)
			{
				if (arr[i] > arr[i + 1])
				{
					buf_arr = arr[i];
					arr[i] = arr[i + 1];
					arr[i + 1] = buf_arr;

					fl = true;
				}
			}
		}

		//Выводим отсортированый массив
		for (int i = 0; i < n; i++)
		{
			printf("%2i", arr[i]);
		}
	}
}

