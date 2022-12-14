#pragma once
#include <stdio.h>

// scanf 쓰기 위한 전처리기
#pragma warning(disable:4996)

void main()
{
	// scanf 함수
	/*
	int value = 50;

	for (int i = 0; i < 5; i++)
	{
		// 버퍼 오버플로 문제 방지 위해 scanf_s 권장
		scanf_s("%d", &value);

		printf("value의 값 : %d", value);
	}
	*/

	// 주소 연산자
	// 변수의 주소 값을 반환하는 연산자
	/*
	int x = 100;

	// 변수의 주소는 프로그램이 실행될 때마다 바뀜
	// 변수의 주소는 16진수로 표기
	// 16진수 1 ~ F 까지 표현
	// 1 2 3 4 5 6 7 8 9 A(10) B(11) C(12) D(13) E(14) F(15)
	printf("x 변수의 주소 : %p\n", &x);
	*/
	// 포인터
	// 변수의 메모리 주소를 저장하는 변수
	/*
	// [] [] [] []
	int a = 20;

	// ptr은 포인터 변수이며, 변수의 주소 저장
	// ptr은 a의 주소를 가지고 있으며,
	// ptr 변수는 a의 시작 주소를 가리킴
	int * ptr = &a;

	printf("a의 값 : %d\n", a);
	printf("a의 주소 : %p\n", &a);

	// ptr이 가리키는 값을 출력할 때 & 사용하지 않음
	printf("ptr이 가리키는 주소 : %p\n", ptr);

	// 역참조

	*ptr = 100;

	printf("a의 값 : %d\n", a);

	// ptr의 고유 주소를 출력할 때 &를 사용
	printf("ptr의 고유 주소 : %p\n", &ptr);

	// 포인터의 크기
	// 32비트 컴파일러에서 4 byte
	// 64비트 컴파일러에서 8 byte

	printf("포인터 변수의 크기 : %d\n", sizeof(ptr));
	*/

	// 시프트 연산자
	// 비트의 값을 주어진 숫자만큼 부호 방향으로 이동시키는 연산자
	/*
	// >> 오른쪽으로 비트 이동시키는 부호
	// << 왼쪽으로 비트 이동시키는 부호

	// [0] [0] [0] [0] [1] [0] [1] [0] = 10
	char count = 10;
	// 왼쪽으로 한 칸 밀었을 때
	// [0] [0] [0] [1] [0] [1] [0] [0] = 20
	printf("왼쪽으로 1번 시프트 연산한 결과 : %d\n", count <<= 1);

	printf("count 변수의 값 : %d\n", count);

	// 오른쪽
	// [0] [0] [0] [0] [0] [0] [1] [0] = 2
	printf("오른쪽으로 3번 시프트 연산한 결과 : %d\n", count >>= 3);
	*/

	// ☆ 1 ~ 5 찍기

	for (int i = 1; i <= 5; i++)
	{
		for (int j = 1; j <= i; j++)
			printf("☆");

		printf("\n");
	}
}