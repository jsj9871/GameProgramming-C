#pragma once
#include <stdio.h>

void main()
{
	// ������ �迭
	/*
	// �迭�� ��ҷ� ������ ������ ������ �迭
	int num1 = 10, num2 = 20, num3 = 30;
	int * array[3] = { &num1, &num2, &num3 };
	for (int i = 0; i < 3; i++)
	{
		printf("array �������� �� : %p\n", array[i]);
		printf("array �����Ͱ� ����Ű�� �� : %d\n", *array[i]);
	}
	const char * data[3] = { "Apple", "Banana", "Melon" };
	// ���ο� KImgeumsoo��� ���ڿ��� ���� �ּҸ� �ٽ� ����Ŵ
	// �׸��� ������ �����Ǿ� �ִ� Apple�� ������ ����
	data[0] = "Kimgeumsoo";
	// *data[0] = 'A';
	for (int i = 0; i < 3; i++)
	{
		// %s : '\0'���ڸ� ������ �������� ��� ����ϴ� ���� ������
		printf("%s\n", data[i]);
	}
	*/

	// ASCII �ڵ�
	/*
	// �̱� ǥ��ȭ ��ȸ�� ������ ���� ��ȯ�� ǥ�� �ڵ�� ���� ���ĺ���
	// ����ϴ� ��ǥ���� ���� ���ڵ�
	if ('A' < 'B')
	{
		for (int i = 0; i < 26; i++)
		{
			char alphabet = 'A' + i;
			printf("%c\n", alphabet);
		}
	}
	*/

	// �����
	/*
	// (int) �� ���� ������ �Է¹޽��ϴ�.
	// A ������ B ������ ����� ����� ������ּ���.
	int A, B;
	scanf_s("%d%d", &A, &B);
	for (int i = 1; i <= A && i <= B; i++)
	{
		if (A % i == 0 && B % i == 0)
		{
			printf("%d  ", i);
		}
	}
	*/

	// �ڱⰡ ������ �����ϰ� ���α׷��� �����°� �Ƿ��� ���� ���˴ϴ�.
	// ȥ�ڼ� ���α׷��� ����� �ź��� ���� ���� ������ ������Ʈ�� ��õ�մϴ�.

	// ¦�� ������
	// �ڱ� �ڽ��� ������ ���� ���(�����)�� ������ �� 
	// �ڱ� �ڽ��� �Ǵ� ���� ����

	int value;
	int result = 0;

	scanf_s("%d", &value);

	for (int i = 1; i < value; i++)
	{
		if (value % i == 0)
		{
			result += i;
		}
	}

	if (value == result)
	{
		printf("������");
	}
	else
	{
		printf("�������� �ƴմϴ�.");
	}

	// 6 �Է� -> ������
	// 7 �Է� -> �������ƴմϴ�.
}