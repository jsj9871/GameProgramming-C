#pragma once
#include <stdio.h>
#include <time.h>

// 재귀 함수
int Function(int count)
{
	// 매개변수의 값이 1이 되면 함수를 반환
	if (count == 1)
	{
		return;
	}

	// 재귀 호출(count - 1)
	Function(count - 1);

	printf("count 변수의 값 : %d\n", count);
}

// 팩토리얼 
int Factorial(int number)
{
	if (number == 1)
	{
		return 1;
	}
	else
	{
		return number * Factorial(number - 1);
	}
}

void main()
{
	// UP - DOWN 게임
	/*
	// (O) 1. 컴퓨터가 랜덤한 숫자를 뽑습니다. 변수 (a) <- 1 ~ 50 랜덤한 값을 넣어줍니다.
	// (O) 2. 우리가 scanf_s( )함수를 사용해서 값을 입력합니다. 변수 (b) <- 입력한 값을 넣어줍니다.
	// (O) 3. 그다음 컴퓨터가 뽑은 랜덤한 숫자와 우리가 입력한 숫자가 맞는지 확인하는 게임입니다.
	// if(a와 b가 맞는지 확인합니다.)
	// 맞으면 "컴퓨터에게 승리하였습니다."
	// 틀리면 HP가 1씩 감소합니다.
	// 컴퓨터가 뽑은 랜덤한 값 : (33)
	// 20값을 입력 (컴퓨터가 뽑은 숫자보다 작습니다.) HP -1;
	// 34값을 입력 (컴퓨터가 뽑은 숫자보다 큽니다.) HP -1;
	int answer = 0;
	int life = 5;
	srand(time(NULL));
	int computer = rand() % 50 + 1;
	printf("현재 life : %d\n", life);
	// 게임 업데이트
	// life 변수가 0이 아니라면 게임이 계속 실행
	while (life != 0)
	{
		printf("컴퓨터가 가지고 있는 숫자를 입력해주세요.\n");
		// scanf_s( )함수는 버퍼를 사용
		// 버퍼
		// 데이터가 이동할 때 임시로 저장되는 공간
		// 서식 지정자에 따라 입력할 수 있는 데이터의 범위도 결정
		scanf_s("%d", &answer);
		if (answer == computer)
		{
			printf("당신은 게임에서 승리하였습니다.");
			break; // while문에서 탈출합니다.
		}
		else if (answer > computer)
		{
			life--;
			printf("컴퓨터가 뽑은 숫자보다 큽니다.\n");
		}
		else if (answer < computer)
		{
			life--;
			printf("컴퓨터가 뽑은 숫자보다 작습니다.\n");
		}
		printf("현재 life : %d\n", life);
	}
	if (life == 0)
	{
		printf("당신은 게임에서 패배하였습니다.");
	}
	*/

	// 삼항 연산자
	// 3개의 피연산자를 가지는 조건 연산자
	/*
	int x = 10;
	int y = 20;
	//      (조건)  ?  (100):(200)
	//                 참	 거짓
	int temp = x < y ? 50 : 100;
	printf("temp 변수의 값 : %d", temp);
	*/

	// 재귀 함수
	/*
	// 어떤 함수에서 자신을 다시 호출하여 작업을 수행하는 함수
	Function(3);
	// 재귀 함수는 함수를 계속 호출하기 때문에
	// 스택 영역에 메모리가 계속 쌓이게 되므로 스택 오버플로우 일어남
	// 재귀 함수를 사용하려면 특정한 시점에서 함수를 반환해주어야 함
	*/

	// 팩토리얼
	// 함수를 생성해서 매개 변수에 n값을 넣어줌
	// n에 값에 대한 팩토리얼을 구해주세요.

	int select = 3;

	int result = Factorial(select);

	printf("result 변수의 값 : %d", result);
}