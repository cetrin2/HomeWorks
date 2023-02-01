#include "stdafx.h"

int main()
{
	int num_values;				//Количество вводимых значений
	int min_value;				//Минимальное значение
	int max_value;				//Макимальное значение
	int sum_values = 0;			//Сумма
	float average_value = 0;	//Среднее

	//Просим ввести количество значений
	printf("Enter the number of values: ");
	scanf_s("%i", &num_values);

	//Создаем массив на основе введенного количества элементов
	int numbers[100];

	//Получаем значения от пользователя и помещаем в массив индексируя значением счетчика
	for (int i = 0; i < num_values; i++)
	{
		scanf_s("%i", &numbers[i]);

		//Запоминаем первое значение для последующего сравнения
		if (i == 0)
		{
			min_value = max_value = numbers[i];
		}

		//Проверяем меньше ли следующее значение, если да - запоминаем
		if (min_value > numbers[i])
		{
			min_value = numbers[i];
		}

		//Проверяем больше ли следующее значение, если да - запоминаем
		if (max_value < numbers[i])
		{
			max_value = numbers[i];
		}

		//Находим сумму введеных значений
		sum_values += numbers[i];

		//Находим среднее арифметическое
		average_value = (float)sum_values / (float)num_values;
	}

	printf("\n\n");

	printf("The min value is %i\n", min_value);
	printf("The max value is %i\n", max_value);
	printf("The sum of values is %i\n", sum_values);
	printf("The average is %f\n", average_value);
}