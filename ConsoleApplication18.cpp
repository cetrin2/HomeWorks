
#include "stdafx.h"
#include "windows.h"

int main()
{
	//�������������� ������
	char str[100];
	char sstr[100];

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
	
	//������ ������� �������
	for (int i = strlen(str); i >= 0; i--)
	{
		sstr[strlen(str) - i] = str[i];
	}

	puts(sstr);
}

