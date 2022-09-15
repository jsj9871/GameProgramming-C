#pragma once
#include <stdio.h>
#include <conio.h>
#include <windows.h>

// 가변 인수
/*
// 인수의 개수와 타입이 미리 정해져 있지 않은 인수
// 가변 인수를 만들기 위해서 자료형을 선언
void Function(int x, ...)
{
	va_list pointer; // 가변 인수의 목록 포인터
	__crt_va_start(pointer, x); // 가변 인수 목록 포인터 설정
	// 가변 인수(x)의 갯수만큼 반복하도록 설정
	for (int i = 0; i < x; i++)
	{
		int value = __crt_va_arg(pointer, int); // int 크기만큼 가변 인수 목록 포인터에서 값을 가져옴
		// pointer는 int 크기만큼 순방향으로 이동
		printf("%d\n", value);
	}
	__crt_va_end(pointer); // 가변 인수 목록 포인터를 NULL 초기화
}
*/

// 좌표 정보 X와 Y값을 받는 함수
void gotoXY(int x, int y)
{
	// x와 y 좌푯값을 설정
	COORD position = { x , y };

	// 좌표 위치를 이동시켜주는 함수
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);
}

int main()
{
	// 가변 인수
	/*
	// Function 이라는 함수는 하나의 매개 변수를 가지고 있기 때문에 하나의 인수만 전달 가능
	// Function(3, 20, 30, 40);
	// x 매개 변수의 시작 주소가 저장
	// 가변 인수는 연속적인 메모리 공간을 가짐
	// x + 1 (20)의 주소
	// x + 2 (30)의 주소
	// x + 3 (40)의 주소
	// printf()는 인수를 계속 가변적으로 받을 수 있음
	// printf("%d,%d,%d,%d", 20, 30, 40, 50);
	*/

	// 좌표 정보를 설정
	int x = 5, y = 5;

	int key = 0;

	// 키 입력은 매 프레임마다 입력
	while (1)
	{
		// 키 입력
		/*
		// 논블로킹
		// 키 입력을 하지 않아도 다른 작업이 실행 가능
		// (VK_DOWN) : 키보드 ↓ 키를 눌렀을 때 실행되는 함수
		if (GetAsyncKeyState(VK_DOWN))
		{
			y++;
			Sleep(100);	// 0.1초 동안 대기
						// Sleep : 1/1000의 단위로 계산
		}
		if (GetAsyncKeyState(VK_UP))
		{
			y--;
			// y 변수가 0보다 작아진다면 y 변수를 0으로 변경
			if (0 <= y)
			{
				y = 0;
			}
			Sleep(100);
		}
		if (GetAsyncKeyState(VK_LEFT))
		{
			x--;
			// x 변수가 0보다 작아진다면 x 변수를 0으로 변경
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
		// 좌표(5, 5)를 설정
		gotoXY(x, y);
		// 좌표 정보를 받아서 출력할 텍스트를 나타냄
		printf("♡");
		// system(cls) : 화면 전체를 지우는 함수
		system("cls");
		*/

		// 블로킹 
		/*
		// 키 입력을 받을 때까지 계속 대기하고 다른 작업이 실행 않음
		// kbhit : 키보드 입력이 되었다면
		// 스캔 코드
		// 어느 키가 눌렀는지를 보고하기 위해 대부분의 컴퓨터 키보드가 컴퓨터로 보내는 데이터
		// ↑ : 72 UP
		// ← : 75 LEFT
		// → : 77 RIGHT
		// ↓ : 80 DOWN
		// 좌표(5, 5)를 설정
		gotoXY(x, y);
		// 좌표 정보를 받아서 출력할 텍스트를 나타냄
		printf("♡");
		// _getch() 함수는 키 입력을 받을 때까지 대기
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
		// system(cls) : 화면 전체를 지우는 함수
		system("cls"); // <- _getch()의 경우 키 입력을 해주어야 실행
		*/
	}

	return 0;
}