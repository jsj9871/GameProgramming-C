#pragma once
#include <stdio.h>
#include <conio.h>
#include <windows.h>

// ���� �μ�
/*
// �μ��� ������ Ÿ���� �̸� ������ ���� ���� �μ�
// ���� �μ��� ����� ���ؼ� �ڷ����� ����
void Function(int x, ...)
{
	va_list pointer; // ���� �μ��� ��� ������
	__crt_va_start(pointer, x); // ���� �μ� ��� ������ ����
	// ���� �μ�(x)�� ������ŭ �ݺ��ϵ��� ����
	for (int i = 0; i < x; i++)
	{
		int value = __crt_va_arg(pointer, int); // int ũ�⸸ŭ ���� �μ� ��� �����Ϳ��� ���� ������
		// pointer�� int ũ�⸸ŭ ���������� �̵�
		printf("%d\n", value);
	}
	__crt_va_end(pointer); // ���� �μ� ��� �����͸� NULL �ʱ�ȭ
}
*/

// ��ǥ ���� X�� Y���� �޴� �Լ�
void gotoXY(int x, int y)
{
	// x�� y ��ǩ���� ����
	COORD position = { x , y };

	// ��ǥ ��ġ�� �̵������ִ� �Լ�
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);
}

int main()
{
	// ���� �μ�
	/*
	// Function �̶�� �Լ��� �ϳ��� �Ű� ������ ������ �ֱ� ������ �ϳ��� �μ��� ���� ����
	// Function(3, 20, 30, 40);
	// x �Ű� ������ ���� �ּҰ� ����
	// ���� �μ��� �������� �޸� ������ ����
	// x + 1 (20)�� �ּ�
	// x + 2 (30)�� �ּ�
	// x + 3 (40)�� �ּ�
	// printf()�� �μ��� ��� ���������� ���� �� ����
	// printf("%d,%d,%d,%d", 20, 30, 40, 50);
	*/

	// ��ǥ ������ ����
	int x = 5, y = 5;

	int key = 0;

	// Ű �Է��� �� �����Ӹ��� �Է�
	while (1)
	{
		// Ű �Է�
		/*
		// ����ŷ
		// Ű �Է��� ���� �ʾƵ� �ٸ� �۾��� ���� ����
		// (VK_DOWN) : Ű���� �� Ű�� ������ �� ����Ǵ� �Լ�
		if (GetAsyncKeyState(VK_DOWN))
		{
			y++;
			Sleep(100);	// 0.1�� ���� ���
						// Sleep : 1/1000�� ������ ���
		}
		if (GetAsyncKeyState(VK_UP))
		{
			y--;
			// y ������ 0���� �۾����ٸ� y ������ 0���� ����
			if (0 <= y)
			{
				y = 0;
			}
			Sleep(100);
		}
		if (GetAsyncKeyState(VK_LEFT))
		{
			x--;
			// x ������ 0���� �۾����ٸ� x ������ 0���� ����
			if (0 >= x)
			{
				x = 0;
			}
			Sleep(100);
		}
		if (GetAsyncKeyState(VK_RIGHT))
		{
			x++;
			Sleep(100);
		}
		// ��ǥ(5, 5)�� ����
		gotoXY(x, y);
		// ��ǥ ������ �޾Ƽ� ����� �ؽ�Ʈ�� ��Ÿ��
		printf("��");
		// system(cls) : ȭ�� ��ü�� ����� �Լ�
		system("cls");
		*/

		// ���ŷ 
		/*
		// Ű �Է��� ���� ������ ��� ����ϰ� �ٸ� �۾��� ���� ����
		// kbhit : Ű���� �Է��� �Ǿ��ٸ�
		// ��ĵ �ڵ�
		// ��� Ű�� ���������� �����ϱ� ���� ��κ��� ��ǻ�� Ű���尡 ��ǻ�ͷ� ������ ������
		// �� : 72 UP
		// �� : 75 LEFT
		// �� : 77 RIGHT
		// �� : 80 DOWN
		// ��ǥ(5, 5)�� ����
		gotoXY(x, y);
		// ��ǥ ������ �޾Ƽ� ����� �ؽ�Ʈ�� ��Ÿ��
		printf("��");
		// _getch() �Լ��� Ű �Է��� ���� ������ ���
		key = _getch();
		switch (key)
		{
			case 72 : y--;
				break;
			case 75 : x--;
				break;
			case 77 : x++;
				break;
			case 80 : y++;
				break;
		}
		// system(cls) : ȭ�� ��ü�� ����� �Լ�
		system("cls"); // <- _getch()�� ��� Ű �Է��� ���־�� ����
		*/
	}

	return 0;
}