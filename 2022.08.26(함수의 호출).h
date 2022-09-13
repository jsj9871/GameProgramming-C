#include <stdio.h>

// �Լ��� ����
// ȣ���� �Լ��� �����Ϸ����� �̸� �˷��ִ� ����  
// ���� �н� ������(O), ��Ƽ �н� ������
void Function(char* name, void* value);

void Integer(int x)
{
	printf("Integer �Լ��� x �� : %d\n", x);
}

void Decimal(float x)
{
	printf("Decimal �Լ��� x �� : %f\n", x);
}

void Character(char x)
{
	printf("Character �Լ��� x �� : %c\n", x);
}

// Swap �Լ����� ���� �ٲٴ� ������ ������
void Swap(int x, int y)
{
	// �Ű� ������ x(10), y(20)
	// ���� ���� temp = y(20)
	int temp = y;

	// y(10) <- x(10)
	y = x;

	// x(20) <- tmep(20) 
	x = temp;
}

void Plus(int x, int y)
{
	printf("���ϱ� �Լ��� ��� : %d", x + y);
}

void main()
{
	// ����(void) ������
	/*
	// �ڷ����� �������� ���� ���·� ��� �ڷ����� ������ �� �ִ� ������
	int value = 10;
	void * ptr = &value;
	// ���� �����ʹ� �޸� �ּҿ� �����ؼ� ���� ���� X
	*(int *)ptr = 20;
	printf("ptr�� ����Ű�� �� : %d\n", *(int *)ptr);
	// ���� �����ͷ� ������ �޸𸮿� �����Ϸ��� ���� �����Ͱ� ����Ű��
	// ������ �ڷ������� �� ��ȯ�� ���־�� ��
	float decimal = 10.5;
	ptr = &decimal;
	*(float*) ptr = 20.5;
	printf("ptr�� ����Ű�� �� : %f\n", *(float*) ptr);

	// ���� �Լ��� �Է��ϴ� ������(����)�� ��µǵ��� �ϰ� ���� ��
	// char(����) int(����) float(�Ǽ�)
	//Integer(50);
	//Character('A');
	//Decimal(10.5);
	int A = 10;
	float B = 99.6;
	char C = 'R';
	Function("int", &A); // <-
	Function("float", &B);
	Function("char", &C);
	*/

	// �� ���� ������ �� �ٲ��
	// �ϳ��� �ӽ� ������ ���� �ű⿡ ���� �����ߴٰ� �ű�� ��
	int A = 10;
	int B = 20;

	//printf("���� A�� �� : %d, ���� B�� �� : %d\n", A, B);

	//  10  20
	// ���� ���� ȣ��
	// �Լ� ȣ�� �� ���޵Ǵ� ������ ���� �����Ͽ�
	// �Լ��� ���ڷ� �����ϴ� ���
	Swap(A, B);
	Plus(10, 20);
	//printf("���� A�� �� : %d, ���� B�� �� : %d\n", A, B);

	// ���ϱ� �Լ� (2���� �Ű� ����)
	// 2�� �μ��� ���� �־ ���Ǵ� �ᱣ���� ���
	// �Լ�(10,20) = 30

	// ���� �Լ� (2���� �Ű� ����)
	// 2�� �μ��� ���� �־ ���Ǵ� �ᱣ���� ���
	// �Լ�(5,5) = 0

	// ���� �Լ� (2���� �Ű� ����)
	// 2�� �μ��� ���� �־ ���Ǵ� �ᱣ���� ���
	// �Լ�(5,5) = 25 

	// ������ �Լ� (2���� �Ű� ����)
	// 2�� �μ��� ���� �־ ���Ǵ� �ᱣ���� ���
	// �Լ�(10,10) = 1 
}

void Function(const char* name, void* value)
{
	printf("%p\n", name); // name ������ ���� �ּ� ex) 00FF55DA
	printf("%s\n", name); // name ������ ���ڿ� int == int					 

	// if���� �񱳵Ǵ� ������ %s�� ����
	if (name == "int")
	{
		printf("%d\n", *(int*)value);
	}
	else if (name == "float")
	{
		printf("%f\n", *(float*)value);
	}
	else if (name == "char")
	{
		printf("%c\n", *(const char*)value);
	}
}