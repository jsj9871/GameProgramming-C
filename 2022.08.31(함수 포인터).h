#pragma once
#include <stdio.h>
#include <stdlib.h>

void Function()
{
	printf("Hello");
}

void main()
{
	// ���� ������ ����
	/*
	int a = 10;
	int b = 20;
	int * ptr1 = &a;
	int * ptr2 = &b;
	int ** pptr1 = &ptr1;
	int ** pptr2 = &ptr2;
	int * temp = *pptr1;
	*pptr1 = *pptr2;
	*pptr2 = temp;
	printf("a�� �� : %d, b�� �� : %d\n", a, b);
	printf("ptr1�� ����Ű�� �� : %d, ptr2�� ����Ű�� �� : %d\n", *ptr1, *ptr2);
	*/

	// ��۸� ������ 
	/*
	// �̹� ������ �޸𸮸� ����Ű�� �ִ� ������
	int * ptr = (int*)malloc(4);
	*ptr = 10;
	printf("ptr�� ����Ű�� �ּ� : %p\n", ptr);
	printf("ptr�� ����Ű�� �� : %d\n", *ptr);
	free(ptr);
	// ���� �Ҵ��� �޸𸮸� ������ �� ������ ������ NULL�� �ʱ�ȭ
	ptr = NULL;
	// ������ �޸𸮸� �ٽ� �Ҵ��ϸ� ó�� ������ ��ġ���� �޸𸮰� ����
	ptr = (int*)malloc(4);
	*ptr = 20;
	printf("ptr�� ����Ű�� �ּ� : %p\n", ptr);
	printf("ptr�� ����Ű�� �� : %d\n", *ptr);
	*/

	// �𸮾� (C++) <- c ��� Ȯ����	 
	// ����Ƽ (C#) <- c ��� ������� �� ������ ���

	// go, lua, java, c, lust, html5, css, ���̽�
	// ��ǻ�� ���а�

	// ���� ���а�
	// ����Ƽ, �𸮾�
	// c ���

	// C �� ���� ����
	// ���α׷��� �� ���� ����
	// C ���� �����ϴ� (�ϵ����, PLC)

	// �Լ� ������
	// �Լ��� �ּҰ��� �����ϰ� ����ų �� �ִ� ����

	//printf("Function�Լ��� �ּ� : %p\n", Function);
	//printf("Function�Լ��� �ּ� : %p\n", &Function);

	void (*fp) (void);

	// �Լ� �����ʹ� �Լ��� ��ȯ���� �Ű������� Ÿ���� ��ġ�ؾ� �ϸ�,
	// �Լ� �����͸� ����Ͽ� �������� �޸𸮸� �Ҵ��� �� ����
	fp = Function;

	fp(5);
}