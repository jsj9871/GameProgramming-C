#pragma once

#include <stdio.h>

void main()
{
	// 자료형
	int	a = 10;		// <- 4 byte 크기
	char b = 'A';		// <- 1 byte 크기	
	float c = 5.25;	// <- 4 byte 크기

	// 변수의 명명규칙
	// 1. 변수의 이름은 대소문자 구분		ex) int A = 20;
	// 2. 변수의 이름은 중복 불가			ex) int a = 20;
	// 3. 변수의 이름은 예약어로 정의 불가	ex) int int;
	// 4. 변수의 이름은 숫자로 시작 불가	ex) int 5A = 10;
	// 5. 변수의 이름에 공백 포함 불가		ex) int Count Down;
	// 6. 변수의 이름에 특수기호는 $와 _만 사용 가능	ex) int Count_Down = 3;	int V$S = 20;

	// 변수의 초기화
	// 최초로 변수의 값을 저장하는 과정

	printf("a의 값 : %d\n", a);	// %d 라는 서식에 a라는 변수 출력
	printf("b의 값 : %c\n", b);	// %c 라는 서식에 b라는 변수 출력
	printf("c의 값 : %f\n", c);	// %f 라는 서식에 c라는 변수 출력

	// 변수는 변할 수 있는 메모리 공간
	a = a + 100;	// a += 100;
	b = 'G';
	c = c - 1.98;	// c -= 1.98;

	// 연산자의 우선 순위
	int temp = (10 + 6) * 4 - 2;

	// printf() 함수의 서식이 여러 개 있을 때 서식 문자의 왼쪽부터 시작하여 변수의 값을 차례대로 넣음
	printf("a의 값 : %d\nb의 값 : %c\nc의 값 : %f\n", a, b, c);	// %d 라는 서식에 a라는 변수 출력
	printf("b의 값 : %c\n", b);	// %c 라는 서식에 b라는 변수 출력
	printf("c의 값 : %f\n", c);	// %f 라는 서식에 c라는 변수 출력
	printf("temp의 값 : %d\n", temp);

	// 상수
	// 프로그램이 실행되는 동안 값이 고정되어 있는 메모리 공간
	const int value = 8;

	printf("value의 값 : %d", value);
	// value = 20; value의 변수는 컴파일 시점에 값이 고정된 상태

	// 리터럴 상수 : 메모리 공간을 가지고 있지 않은 상수
	// 심볼릭 상수 : 메모리 공간을 가지고 있는 상수

}