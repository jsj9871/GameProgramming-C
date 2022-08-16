#include <stdio.h>

void main()
{
	// 사분면
	/*
	// 제 1 사분면 : (+x, +y)
	// 제 2 사분면 : (-x, +y)
	// 제 3 사분면 : (-x, -y)
	// 제 4 사분면 : (+x, -y)
	// Y 절편 : (x[0], y)
	// X 절편 : (x, y[0])
	// 원점 : (x[0], y[0])

	int x = 10;
	int y = 20;

	if (x > 0 && y > 0)
	{
		printf("제 1 사분면");
	}

	else if (x < 0 && y > 0)
	{
		printf("제 2 사분면");
	}

	else if (x < 0 && y < 0)
	{
		printf("제 3 사분면");
	}

	else if (x > 0 && y < 0)
	{
		printf("제 4 사분면");
	}

	else if (x == 0 && y != 0)
	{
		printf("Y 절편");
	}

	else if (x != 0 && y == 0)
	{
		printf("X 절편");
	}

	else
	{
		printf("원점");
	}
	*/

	// 논리연산자
	// && (AND) : 두개의 조건 모두 참이면 조건 실행
	// || (OR) : 두 개의 조건에 하나라도 참이면 조건 실행

	/*
	if (x == 10 && y == 20)
	{
		printf("논리 연산 AND가 참입니다.\n");

		if (5 < 10)
		{
			printf("if문 안에 있는 조건문입니다.\n");
		}
	}

	if (x == 10 || y == 25)
	{
		printf("논리 연산 OR이 참입니다.\n");
	}
	*/

	// switch
	
	// 어떤 결과에 따라 그 결과부터 실행되는 조건문

	float variable = 3.25;
	
	switch (variable)
	{
		case 3.25 : printf("부동 소수점 오차로 인해 switch 조건 사용 불가");
			break;
	}

	// break문
	// 특정한 시점에서 분기를 탈출하는 제어문
	/*
	int value = 5;
	
	switch (value)
	{
		case 0 : printf("0 입니다.");
			break;
		case 1 : printf("1 입니다.");
			break;
		default : printf("잘못 선택했습니다.");
	}


	// 대학 성적표
	// A는 100 ~ 90점
	// B는 90 ~ 80점
	// C는 80 ~ 70점
	// D는 70 ~ 60점
	// E는 60 ~ 50점
	// 과락

	char alphabet = 'C';

	switch (alphabet)
	{
		case 'A' : printf("100 ~ 90점");
			break;
		case 'B' : printf("90 ~ 80점");
			break;
		case 'C' : printf("80 ~ 70점");
			break;
		case 'D' : printf("70 ~ 60점");
			break;
		case 'E' : printf("60 ~ 50점");
			break;
		default : printf("과락");
	}
	*/
}	