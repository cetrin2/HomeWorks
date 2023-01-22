
#include "stdafx.h"

int main()
{
	//Задаем начальное значения счетчикам
	int hello_i = 0;
	int num_i = 0;
	int odd_number_i = 0;
	int sum = 0;

	//Выводим Hello девять раз
	while (hello_i < 9)
	{
		printf("Hello\n");

		hello_i++;
	}

	
	//Выводим цифры от 0 до 15
	while (num_i <= 15)
	{
		printf("%i\n", num_i);

		num_i++;
	}

	//Выводим цифры от 0 до 15 (нечетные)
	while (odd_number_i <= 15)
	{
		if (odd_number_i % 2 > 0)
		{
			printf("%i\n", odd_number_i);
		}

		odd_number_i++;
	}

	//Решил для этого усовия использовать цикл for, мне кажется он более нагляден
	//Выводим сумму чисел от 5 до 15
	for (int i = 5; i <= 15; i++)
	{
		sum = sum + i;
	}

	printf("%i", sum);
}

