// ConsoleApplication3.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"


int main()
{
	//Объявляем переменные для хронения введенных данных
	long long int log;
	long long int pass;

	//Получаем "логин"
	printf("Enter your login: ");
	scanf_s("%lli", &log);

	//Получаем "пароль"
	printf("Enter your password: ");
	scanf_s("%lli", &pass);

	//Проверяем данные
	if (((log == 111) && (pass == 222)) || ((log == 333) && (pass == 444)))
	{
		printf("Data is correct");
	}
	else
	{
		printf("Data is wrong");
	}
}

