
#include "stdafx.h"
#include "windows.h"

int main()
{
	//Инициализируем массив и переменные
	char str[100];
	int c, i, j;

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

	int length = strlen(str);
	
	//Меняем местами символы
	for (i = 0, j = length - 1; i < j; i++, j--)
	{
		c = str[i];
		str[i] = str[j];
		str[j] = c;
	}

	puts(str);
}
