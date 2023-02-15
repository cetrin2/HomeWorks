
#include "stdafx.h"
#include "windows.h"


int main()
{
	//Инициилизируем массив и переменные
	char str[100];
	char tmp;
	int i;

	//Получаем строку от пользователя
	printf("Enter a string\n");
	gets_s(str);

	//Выводим второй символ
	printf("%c\n", str[1]);

	//Считаем количество символов
	int quantity = strlen(str);

	//Выводим последний эллемент
	printf("%c\n", str[quantity - 1]);

	//Меняем местами первый и последний символ
	tmp = str[0];

	str[0] = str[quantity - 1];

	str[quantity - 1] = tmp;

	//Выводим результат
	puts(str);

	//Запрашиваем номер символа для удаления
	printf("Enter a num of char for deleting\n");
	scanf_s("%i", &i);

	//Удаляем
	for (int n = i - 1; n < strlen(str); n++)
	{
		str[n] = str[n + 1];
	}

	//Выводим результат
	puts(str);
}

