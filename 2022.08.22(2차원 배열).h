#include <stdio.h>

void main()
{
	// ������ ����
	/*
	int array[5] = { 10, 15, 20, 25, 30 };

	printf("�迭�� �ּ� : %p\n", array);

	// pointer ������ array�� ���� �ּҸ� ����Ŵ
	int* pointer = array;

	printf("������ ������ �� : %p\n", pointer);
	printf("������ ������ ����Ű�� �� : %d\n", *pointer);

	// pointer ������ ����Ű�� �ڷ����� ũ�⸸ŭ ����
	pointer = pointer + 1;
	printf("������ ������ �� : %p\n", pointer);
	printf("������ ������ ����Ű�� �� : %d\n", *pointer);

	// ����
	// �迭 array[3] ����� ���� �����ͷ� �����ؼ� 100���� ����

	pointer = pointer + 2;
	*pointer = 100;

	printf("������ ������ �� : %p\n", pointer);
	printf("������ ������ ����Ű�� �� : %d\n", *pointer);
	*/

	// �ִ񰪰� �ּڰ� ���ϱ�
	/*
	// data��� �迭 �ȿ��� �ִ� : 66
	// data��� �迭 �ȿ��� �ּڰ� : 1

	int max = 0;
	int min = 100001;

	int data[5] = { 10, 5, 66, 1, 2 };

	for (int i = 0; i <= 4; i++)
	{
		printf("i�� �� : %d\n", i);
		printf("data �迭�� �� : %d\n", data[i]);

		if (data[i] > max)
			max = data[i];

		if (data[i] < min)
			min = data[i];
	}

	printf("�迭�� �ִ� ������ �ִ� : %d\n", max);
	printf("�迭�� �ִ� ������ �ּڰ� : %d\n", min);
	*/

	// ��� ���� ������
	/*
	// ����� ����Ű�� �������̸�, ������ ��ü�� ����� �ƴ�

	int value = 100;
	int x = 300;
	const int* ptr = &value;

	// ������ ������ ����Ű�� ���� ������ �� ����
	// *ptr = 100;

	// ��� ���� �����ʹ� ����Ű�� ������ ���ȭ���� ����
	value = 200;

	// ������ ����Ű�� ���� ��� ����
	printf("ptr�� ����Ű�� �� : %d\n", *ptr);

	// ��� ���� �������� ��� �ٸ� ������ �ּҴ� ���� X
	ptr = &x;

	printf("ptr�� ����Ű�� �� : %d\n", *ptr);
	*/

	// 2���� �迭
	// �迭�� ��ҷ� �� �ٸ� �迭�� ������ �迭
	/*
	int team[3][2] =
	{
		{0, 5},		// [0][0] = 0,	[0][1] = 5
		{10, 4},	// [1][0] = 10,	[1][1] = 4
		{9, 1}		// [2][0] = 9,	[2][1] = 1
	};

	// 2�� for���� �̿��ؼ� 2���� �迭�� ���� ���� ���
	// printf("ù��° ���� ù��° �࿡ �ִ� �� : %d", team[0][0]);

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			printf("%d��° ���� %d��° ���� �� : %d\n", i, j, team[i][j]);
		}
	}
	*/
}#pragma once
