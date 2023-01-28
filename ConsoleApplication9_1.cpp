

#include "stdafx.h"


int main()
{
	int num_values;				//Количество вводимых значений
	int cur_value;				//Текущее значение
	int min_value;				//Минимальное значение
	int max_value;				//Макимальное значение
	int sum_values = 0;			//Сумма
	float average_value = 0;	//Среднее

	//Просим ввести количество значений
	printf("Enter the number of values: ");
	scanf_s("%i", &num_values);

	for (int i = 0; i < num_values; i++)
	{
		scanf_s("%i", &cur_value);

		//Запоминаем первое значение для последующего сравнения
		if (i == 0)
		{
			min_value = cur_value;
			max_value = cur_value;
		}

		//Если введенное значение меньше предыдущего - запоминаем
		if (cur_value < min_value)
		{
			min_value = cur_value;
		}

		//Если введенное значение больше предыдущего - запоминаем
		if (cur_value > max_value)
		{
			max_value = cur_value;
		}

		//Определяем сумму чисел путем сложения каждой итерации цикла
		sum_values += cur_value;
	}

	//Определяем среднее
	average_value = (float)sum_values / (float)num_values;

	printf("The min value is %i\n", min_value);
	printf("The max value is %i\n", max_value);
	printf("The sum of values is %i\n", sum_values);
	printf("The average is %f\n", average_value);
}

