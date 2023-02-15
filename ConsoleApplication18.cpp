
#include "stdafx.h"
#include "windows.h"

int main()
{
	//Инициализируем массив
	char str[100];
	char sstr[100];

	//Получаем строку
	printf("Enter a string\n");
	gets_s(str);

	//Выводим исходный результат
	puts(str);

	//Удаляем первый символ
	for (int n = 0; n < strlen(str); n++)
	{
		str[n] = str[n + 1];
	}

	//Выводим результат без первого символа
	puts(str);

	//Получаем новую строку
	printf("Enter a next string\n");
	gets_s(str);
	
	//Меняем местами символы
	for (int i = strlen(str); i >= 0; i--)
	{
		sstr[strlen(str) - i] = str[i];
	}

	puts(sstr);
}

