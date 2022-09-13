#pragma once
#include <stdio.h>

void main()
{
	// 포인터 배열
	/*
	// 배열의 요소로 포인터 변수를 가지는 배열
	int num1 = 10, num2 = 20, num3 = 30;
	int * array[3] = { &num1, &num2, &num3 };
	for (int i = 0; i < 3; i++)
	{
		printf("array 포인터의 값 : %p\n", array[i]);
		printf("array 포인터가 가리키는 값 : %d\n", *array[i]);
	}
	const char * data[3] = { "Apple", "Banana", "Melon" };
	// 새로운 KImgeumsoo라는 문자열의 시작 주소를 다시 가리킴
	// 그리고 이전에 참조되어 있던 Apple의 참조는 끊김
	data[0] = "Kimgeumsoo";
	// *data[0] = 'A';
	for (int i = 0; i < 3; i++)
	{
		// %s : '\0'문자를 만나는 순간까지 계속 출력하는 서식 지정자
		printf("%s\n", data[i]);
	}
	*/

	// ASCII 코드
	/*
	// 미국 표준화 협회가 제정한 정보 교환용 표준 코드로 영문 알파벳을
	// 사용하는 대표적인 문자 인코딩
	if ('A' < 'B')
	{
		for (int i = 0; i < 26; i++)
		{
			char alphabet = 'A' + i;
			printf("%c\n", alphabet);
		}
	}
	*/

	// 공약수
	/*
	// (int) 두 개의 변수를 입력받습니다.
	// A 변수와 B 변수의 공통된 약수를 출력해주세요.
	int A, B;
	scanf_s("%d%d", &A, &B);
	for (int i = 1; i <= A && i <= B; i++)
	{
		if (A % i == 0 && B % i == 0)
		{
			printf("%d  ", i);
		}
	}
	*/

	// 자기가 스스로 생각하고 프로그램을 만들어보는게 실력이 많이 향상됩니다.
	// 혼자서 프로그램을 만드는 거보다 팀을 만들어서 간단한 프로젝트를 추천합니다.

	// 짝수 완전수
	// 자기 자신을 제외한 양의 약수(진약수)를 더했을 때 
	// 자기 자신이 되는 양의 정수

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

	if (value == result)
	{
		printf("완전수");
	}
	else
	{
		printf("완전수가 아닙니다.");
	}

	// 6 입력 -> 완전수
	// 7 입력 -> 완전수아닙니다.
}