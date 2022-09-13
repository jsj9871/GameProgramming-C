#pragma once
#include <stdio.h> // <> ���̺귯�� ��� ������ ������ �� ����մϴ�.
#include "Function.h" // "" ����� ���� ��� ������ ������ �� ����մϴ�.

// ��ũ��
/*
// ���α׷� ������ Ư���� �����Ͱ� ���ڿ��� ���ǵǰ� ó���Ǵ� ����
// ��ũ�δ� �ڷ����� �����Ƿ� �޸� ������ Ȯ������ ����
#define PI 3.14
// ��ũ�ο����� ;�� �ʿ����� ����
// ��ũ�� �Լ��� �ڷ����� �����Ƿ� �޸� ������ Ȯ������ ����
#define Solution(x, y) x * y // 1 + (1 * 2) + 1
#define ANDROID 1
#define IOS 0
*/

// ����ü
struct Character
{
	int health;
	float weight;
	const char* name;
	// ����ü�� �����ϱ� ���� ����ü�� 
	// �޸� ������ �������� �����Ƿ�,
	// ����ü ���ο� �ִ� �����͸� �ʱ�ȭ�� �� ����
};

void main()
{
	// ��ó����
/*
	// ���α׷��� �����ϵǱ� ������ ���α׷��� ���� ���� ó���ϴ� ����
	int result = Function(10, 20);
	printf("result ������ �� : %d\n", result);
	// ��ũ�� ������ ����̰�, �޸� ������ ���� ������ ���� ������ �� ����
	// PI = 3.45;
	int a = 1;
	int b = 2;
	printf("PI�� �� : %f\n", PI);
	printf("Solution �Լ��� ��� : %d\n", Solution(a,b));
	printf("Solution �Լ��� ��� : %d\n", Solution(a + 1, b + 1));
*/

// ���Ǻ� ������
/*
	// ���ǿ� ���� �ڵ��� ���� �κ��� ���������� �� ���� ������ �� ����
	// ���Ǻ� �������� #endif�� ����ؼ� ������ ��
#if IOS
	// PC�� �˸´� Ű �Է�
	printf("�ȵ���̵� ����Դϴ�.");
#elif ANDROID
	// ����Ͽ� �˸´� Ű �Է�
	printf("�� ��° �����Դϴ�.");
#else
	printf("2���� ������ �� Ʋ���ϴ�.");
#endif
*/

// ����ü
/*
// ���� ���� ������ �ϳ��� �������� ����ȭ��
// ���� �ϳ��� ��ü�� �����ϴ� ��
struct Character leesin;
leesin.health = 100;
leesin.name = "Leesin";
leesin.weight = 80.5f;
printf("leesin�� ü�� : %d\n", leesin.health);
printf("leesin�� �̸� : %s\n", leesin.name);
printf("leesin�� ������ : %f\n", leesin.weight);
// ����ü�� �ʱ�ȭ ����Ʈ�� ����� ����
// ����ü ������ ����� ������ ������ ���ǵǾ�� ��
struct Character Alistar = {200, 100.5, "Alistar"};
printf("leesin�� ü�� : %d\n", Alistar.health);
printf("leesin�� �̸� : %s\n", Alistar.name);
printf("leesin�� ������ : %f\n", Alistar.weight);
*/

// ���׼�
// �ڿ��� �߿��� �ڱ� �ڽ��� ������ ���� �����
// ��� ������ �� �ڱ� �ڽź��� �� Ŀ���� ��
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

	if (result > value)
	{
		printf("���׼�");
	}
	else
	{
		printf("���׼��� �ƴմϴ�.");
	}

}