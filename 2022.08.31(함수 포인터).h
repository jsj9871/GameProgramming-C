#pragma once
#include <stdio.h>
#include <stdlib.h>

void Function()
{
	printf("Hello");
}

void main()
{
	// 이중 포인터 응용
	/*
	int a = 10;
	int b = 20;
	int * ptr1 = &a;
	int * ptr2 = &b;
	int ** pptr1 = &ptr1;
	int ** pptr2 = &ptr2;
	int * temp = *pptr1;
	*pptr1 = *pptr2;
	*pptr2 = temp;
	printf("a의 값 : %d, b의 값 : %d\n", a, b);
	printf("ptr1이 가리키는 값 : %d, ptr2가 가리키는 값 : %d\n", *ptr1, *ptr2);
	*/

	// 댕글링 포인터 
	/*
	// 이미 해제된 메모리를 가리키고 있는 포인터
	int * ptr = (int*)malloc(4);
	*ptr = 10;
	printf("ptr이 가리키는 주소 : %p\n", ptr);
	printf("ptr이 가리키는 값 : %d\n", *ptr);
	free(ptr);
	// 동적 할당한 메모리를 해제할 때 포인터 변수를 NULL로 초기화
	ptr = NULL;
	// 해제한 메모리를 다시 할당하면 처음 생성한 위치에서 메모리가 생성
	ptr = (int*)malloc(4);
	*ptr = 20;
	printf("ptr이 가리키는 주소 : %p\n", ptr);
	printf("ptr이 가리키는 값 : %d\n", *ptr);
	*/

	// 언리얼 (C++) <- c 언어 확장팩	 
	// 유니티 (C#) <- c 언어 기반으로 더 편리해진 언어

	// go, lua, java, c, lust, html5, css, 파이썬
	// 컴퓨터 공학과

	// 게임 공학과
	// 유니티, 언리얼
	// c 언어

	// C 언어를 배우는 이유
	// 프로그래밍 언어에 대한 기초
	// C 언어로 개발하는 (하드웨어, PLC)

	// 함수 포인터
	// 함수의 주소값을 저장하고 가리킬 수 있는 변수

	//printf("Function함수의 주소 : %p\n", Function);
	//printf("Function함수의 주소 : %p\n", &Function);

	void (*fp) (void);

	// 함수 포인터는 함수의 반환형과 매개변수의 타입이 일치해야 하며,
	// 함수 포인터를 사용하여 동적으로 메모리를 할당할 수 없음
	fp = Function;

	fp(5);
}