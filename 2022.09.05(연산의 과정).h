#include <stdio.h>
#include <math.h> // ���� ���� ��� ����

struct Player
{
	int x;
	int y;
};

struct Monster
{
	int x;
	int y;
};

void ParameterArray(int array[])
{
	for (int i = 0; i < 5; i++)
	{
		array[i] = 10;
	}
}


int main()
{
	// �� �� ������ �Ÿ�
	/*
	struct Player character = {0, 0};
	struct Monster dragon = {3, 5};
	// character�� dragon�� �Ÿ��� �����ּ���.
	printf
	(
		"�� �� ������ �Ÿ� : %lf",
		sqrt(pow(character.x - dragon.x, 2) + pow(character.y - dragon.y, 2))
	);
	*/

	// Lvalue vs Rvalue
	/*
	// Lvalue
	// ǥ���� ���Ŀ��� ������� �ʴ� ���̸�, �̸��� ���ϰ� �ִ� �����Դϴ�.
	// Rvalue
	// ǥ���� ���Ŀ� ������� ���̸�, �ӽ� ����
	// 10,20 <- Rvalue
	// a, b <- Lvalue
	// Lvalue�� Rvalue�ε� ����� �� ����
	int a = 10;
	int b = 20;

	// a + b : �ӽ� ����
	int result = a + b;
	// Lvalue�� ����� ����� �� ����
	// 10 = a;
	// a + b = 10;
	printf("result�� ������ �� : %d", result);
	// ���� ����, ���� ����
	// ���� �������� ��쿡�� Lvalue�� Rvalue�� ����� �� ����
	// ���� �������� ��쿡�� Rvalue�θ� ����� ����
	int x = 0;
	int y = 0;
	// ���� ������ ������ �ڱ� �ڽ�(����)�� ��ȯ
	++y;
	// ���� ������ ������ ���纻�� ��ȯ
	x++;
	*/

	// [0] [0] [0] [0] [0]
	int room[5] = { 0, };

	for (int i = 0; i < 5; i++)
	{
		printf("%d  ", room[i]);
	}

	// room�̶�� �̸��� �迭�� ���� �ּҸ� �ǹ�
	ParameterArray(room);

	printf("\n");

	for (int i = 0; i < 5; i++)
	{
		printf("%d  ", room[i]);
	}


	return 0;
}