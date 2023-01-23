
#include "stdafx.h"


int main()
{
	//Задаем переменную для угадывания числа
	int num = 0;

	//Выводим таблицу умножения на 5, от 1 до 10
	for (int i = 1; i <= 10; i++)
	{
		printf("5 * %i = %i\n", i, 5 * i);
	}

	//Выводим информацию о числе, если не равно 7
	while (num != 7)
	{
		//Получаем число от пользователя
		scanf_s("%i", &num);

		//Определяем, больше или меньше семи
		if (num > 7)
		{
			printf("The number is greater than 7\n");
		}
		else if (num < 7)
		{
			printf("The number is less than 7\n");
		}

		//Определяем, больше или меньше десяти
		if (num > 10)
		{
			printf("The number is greater than 10\n");
		}
		else if (num < 10)
		{
			printf("The number is less than 10\n");
		}

		//Определяем делится ли на два
		if (num % 2 == 0)
		{
			printf("The number is divisible by two\n");
		}
		else
		{
			printf("The number is not divisible by two\n");
		}

		//Определяем делится ли на три
		if (num % 3 == 0)
		{
			printf("The number is divisible by three\n");
		}
		else
		{
			printf("The number is not divisible by three\n");
		}
	}
}

