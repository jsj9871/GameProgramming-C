#include <stdio.h>

void main()
{
	// ������
	/*
	for (int i = 2; i <= 9; i++)
	{
		for (int j = 1; j <= 9; j++)
		{
			printf("%d x %d = %d\n", i, j, i * j);
		}

		printf("\n");
	}
	*/

	// while��
	// Ư�� ������ ������ ������ ��� �־��� ��ɹ� �����ϴ� �ݺ���
	/*
	int memory = 5;

	while (memory > 1)
	{
		memory--;
		printf("������ ���Դϴ�.\n");
	}
	*/

	// do while ��
	// ���ǰ� ������� �� ���� �۾��� ������ ���� ���ǿ� ���� ��ɹ� �����ϴ� �ݺ���
	/*
	int value = 5;

	do
	{	// do���� ������ ������ while�� �������� ��� X
		// int x = 10;
		printf("������ �����Դϴ�.");
	}
	while (value == 10);
	*/

	// continue ��
	// �ش� ���ǹ��� �������� �ʰ�, �ݺ����� �̾ �����ϴ� ���
	/*
	for (int i = 0; i < 5; i++)
	{
		if (i == 3)
			continue;

		printf("%d", i);
	}
	
	// 1 ~ 10���� �� ���, 3�� ��� ����

	for (int i = 1; i <= 10; i++)
	{
		if (i % 3 == 0)
			continue;

		printf("%d\n", i);
	}
	*/

	// �� ��ȯ
	// ���� �ٸ� �ڷ����� ������ �ִ� �������� ������ �̷���� ��
	// ������ �����ߴ� �ڷ����� �ٸ� �ڷ������� ��ȯ�ϴ� ����
	/*
	// �Ϲ��� �� ��ȯ
	// ���� �ٸ� �ڷ������� ������ �̷���� ��
	// �ڷ����� ũ�Ⱑ ū �ڷ������� ��ȯ�Ǵ� ����
	
	printf("char�� ũ�� : %d\n", sizeof(char));
	printf("short�� ũ�� : %d\n", sizeof(short));
	printf("int�� ũ�� : %d\n", sizeof(int));
	printf("long�� ũ�� : %d\n", sizeof(long));
	printf("float�� ũ�� : %d\n", sizeof(float));

	char x = 10;
	short y = 20;

	//  30 = 4 byte (int) + 4 byte (int)
	int sum = x + y;

	int z = 500;	// [] [] [] []
	char temp = z;	// []

	printf("temp�� �� : %d\n", temp);

	// ����� �� ��ȯ
	int p0 = 10;
	int p1 = 3;

	float result = (float)p0 / p1;
	printf("result�� �� : %f\n", result);

	// int�� long�� ����
	// int : 32��Ʈ, 64��Ʈ �ü������ 4 Byte ũ��
	// long : 32��Ʈ - 4 Byte, 64��Ʈ - 8 Byte
	// ��, long�� �������� 64��Ʈ �ü������ 4 Byte
	*/
}	