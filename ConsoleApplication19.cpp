// ConsoleApplication19.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include "stdlib.h"
#include "time.h"

void fill_array(int arr[], int size)
{
	//��������� ���������� ����������
	for (int i = 0; i < size - 1; i++)
	{
		arr[i] = rand() % 15;
	}

	//������� ���������
	for (int i = 0; i < size - 1; i++)
	{
		printf("%3i", arr[i]);
	}
}

int main()
{
	//������ �������
	const int i = 5;
	const int j = 8;

	//������������� ��������
	int arr_o[i] = {};
	int arr_s[j] = {};

	//���������� ����� �������
	fill_array(arr_o, i);

	printf("\n");

	//���������� ����� �������
	fill_array(arr_s, j);

}

