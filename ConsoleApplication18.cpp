
#include "stdafx.h"
#include "windows.h"

int main()
{
	//�������������� ������ � ����������
	char str[100];
	int c, i, j;

	//�������� ������
	printf("Enter a string\n");
	gets_s(str);

	//������� �������� ���������
	puts(str);

	//������� ������ ������
	for (int n = 0; n < strlen(str); n++)
	{
		str[n] = str[n + 1];
	}

	//������� ��������� ��� ������� �������
	puts(str);

	//�������� ����� ������
	printf("Enter a next string\n");
	gets_s(str);

	int length = strlen(str);
	
	//������ ������� �������
	for (i = 0, j = length - 1; i < j; i++, j--)
	{
		c = str[i];
		str[i] = str[j];
		str[j] = c;
	}

	puts(str);

	system("pause");
}