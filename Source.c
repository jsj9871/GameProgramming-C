#include <stdio.h>

void main()
{
	// ���ڿ�
	// �������� �޸� ������ ������ ���� ������ ����
		/*
	// char : 1 byte�̹Ƿ� �ϳ��� ���ڸ� ������ �� �ֽ��ϴ�.
	char alphabet = 'A';

	char string[6] = { 'A', 'B', 'C', 'D', 'E'};

	string[0] = 'T';

	// ���� �迭�� ������ �� �� �������� NULL�� ����
	// ���� �迭�� �迭 ũ�� n + 1�� ����
	printf("string �迭�� �� : %s\n", string);

	// NULL���ڴ� ���ڿ��� ���� �˷��ִ� ���� ����

	// [T] [B] [\0] [D] [E]
	string[2] = '\0';

	// ���� �迭 �߰��� NULL���ڰ� ������ NULL���� ������ ���ڿ������� ���
	printf("string �迭�� �� : %s\n", string);
	*/

	// ���ڿ� �ʱ�ȭ
	/*
	// �ڵ� ����
	// ������ ���� -> BSS, Read Only Data Segment
	// ����
	// ��

	// "count"
	// [c][o][u][n][t][\0] -> char + null = 6 byte

	// 4 byte ������ �޸𸮸� ������ �� �ִ� ������ ����
	// char * ptr -> [c][o][u][n][t][\0]
	const char* ptr = "count";

	// ������ ������ ��� ����Ű�� �ִ��� Ȯ���ϱ� ���ؼ�
	// �ű� �ִ� ���� ����ϱ� ���ؼ� %c�� ���

	// ptr[0] = "T";
	// *ptr �ϸ� �����Ͱ� ����Ű�� �ִ� ��ġ�� �����ؼ� �� ���

	// ptr = count
	// "%s" ���ڿ��� �����ּҷ� �����ؼ� ���� count ���
	printf("ptr�� ����Ű�� �ּ� : %p\n", ptr);
	printf("ptr�� ����Ű�� �� : %c\n", ptr[0]);
	printf("ptr�� ����Ű�� ���ڿ��� �� : %s\n", ptr);
	*/

	// ���� ������
	/*
	// [4 byte]
	int value = 100;

	// ptr(value �ּ�) -> value �ּҸ� ����Ŵ
	int* ptr = &value;

	// twoPtr(���� ������)�� ptr�̶�� ������ ������ �ּ� ����
	// twoPtr(ptr�� �ּ�) -> ptr�� ���� �ּҸ� ����Ŵ
	int** twoPtr = &ptr;

	printf("value�� ���� �ּ� : %p\n", &value);
	printf("ptr�� ����Ű�� �� : %p\n", ptr);
	printf("twoPtr�� ����Ű�� �� : %p\n", twoPtr);

	printf("ptr ������ ����Ű�� ������ �� : %d\n", *ptr);
	printf("twoPtr ������ ����Ű�� ������ �� : %d", **twoPtr);

	// twoPtr(00AAEE66)  ptr(00FF883A)       value
	//   [00FF883A] ----> [00DDFC55] ----> [00DDFC55]
	*/

	// �Ҽ� �Ǻ��ϱ�
	/*
	// �Ҽ�(1���� ū �ڿ��� �߿� 1�� �ڽŸ��� ����� ������ ��)
	
	// ���� �Է��� ���ڰ� �Ҽ����� �ƴ��� �Ǻ��ϴ� ���α׷�
	// ex) 5 -> �Ҽ��Դϴ�.
	// ex) 6 -> �Ҽ��� �ƴմϴ�.

	int count = 0;
	int value;

	scanf_s("%d", &value);

	for (int i = 2; i < value - 1; i++)
	{
		if (value % i == 0)s
		{
			count++;
		}
	}

	if (count == 0)
	{
		printf("�Ҽ��Դϴ�.");
	}
	else
	{
		printf("�Ҽ��� �ƴմϴ�.");
	}
	*/
}