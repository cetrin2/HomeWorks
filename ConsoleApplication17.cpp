
#include "stdafx.h"
#include "windows.h"


int main()
{
	//�������������� ������ � ����������
	char str[100];
	char tmp;
	int i;

	//�������� ������ �� ������������
	printf("Enter a string\n");
	gets_s(str);

	//������� ������ ������
	printf("%c\n", str[1]);

	//������� ���������� ��������
	int quantity = strlen(str);

	//������� ��������� ��������
	printf("%c\n", str[quantity - 1]);

	//������ ������� ������ � ��������� ������
	tmp = str[0];

	str[0] = str[quantity - 1];

	str[quantity - 1] = tmp;

	//������� ���������
	puts(str);

	//����������� ����� ������� ��� ��������
	printf("Enter a num of char for deleting\n");
	scanf_s("%i", &i);

	//�������
	for (int n = i - 1; n < strlen(str); n++)
	{
		str[n] = str[n + 1];
	}

	//������� ���������
	puts(str);
}

