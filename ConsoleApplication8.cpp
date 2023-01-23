
#include "stdafx.h"


int main()
{
	//Переменная для хранения результата
	int sum = 0;

	//Сумируем числа от 1 до 100
	for (int i = 1; i <= 100; i++)
	{
		sum = sum + i;
	}

	//Выводим результат
	printf("%i", sum);
}

