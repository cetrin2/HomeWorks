
#include "stdafx.h"


int main()
{
	//Объявляем переменную
	int day_number;

	//Получаем значение от пользователя
	printf("Enter the number of the day of the week");
	scanf_s("%i", &day_number);

	//Проверяем совпадение
	switch (day_number)
	{
		case 1:
		{
			printf("Monday");
		}
			break;
		case 2:
		{
			printf("Tuesday");
		}
			break;
		case 3:
		{
			printf("Wednesday");
		}
			break;
		case 4:
		{
			printf("Thursday");
		}
			break;
		case 5:
		{
			printf("Friday");
		}
			break;
		case 6:
		{
			printf("Saturday");
		}
			break;
		case 7:
		{
			printf("Sunday");
		}
			break;
		default:
		{
			printf("Error");
		}
	}
}

