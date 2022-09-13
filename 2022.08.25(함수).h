#pragma once
#include <stdio.h>

// char, int, float

// void는 자료형 X
// 사용자 정의 함수는 main() 함수에 외부에서 선언
// 함수에 매개변수가 들어가지 않아도 선언 가능
void Function()	// () <- 매개변수가 들어가는 영역
{ // <- Function() 함수의 시작점

	printf("안녕하세요?\n");	// printf() 라이브러리 함수
	printf("안녕하세요?\n");
	printf("안녕하세요?\n");

	for (int i = 0; i < 3; i++)
	{
		printf("안녕하세요?\n");
	}
} // <- Function() 함수의 종료 지점

// 매개 변수
// 함수의 정의에서 전달받은 인수를 함수 내부로 전달하기 위해 사용하는 변수
// 매개 변수를 선언하기 위해서는 자료형을 정해주어야 함
void Temp(int x)
{
	printf("변수의 x의 : %d\n", x);
}

// 함수의 이름도 중복이 허용 X
// 매개변수는 여러 개를 생성해서 사용 가능
void Add(int x, int y)
{
	int result = x + y;
	printf("result 변수의 값 : %d", result);
}

// 전역 변수
// 함수 외부에서 선언된 변수로, 어디서든 접근 가능
// 프로그램이 종료될 때 메모리에서 사라지는 특징

// 지역 변수는 스택 영역에 저장
// 전역 변수는 데이터 영역에 저장 -> 초기화 되지 않은 영역
int count;

void Minus()
{
	count++;
	printf("count 변수의 주소 : %p\n", &count);
	printf("count 변수의 값 : %d\n", count);
}

// 정적 변수
// 지역 변수의 특성을 가지면서, 전역 변수의 특성을 가지고 있는 변수
void Home()
{
	static int variable = 0;
	variable++;
	printf("variable 변수의 값 : %d\n", variable);
} // <- variable(프로그램이 종료될 때까지 메모리에 남아있음)

// [코드]
// [데이터] -> 정적 변수, 전역 변수 (프로그램이 종료될 때까지 메모리에서 사라지지 않음) 
// [힙] -> 동적 할당(프로그래머가 직접 관리하는 메모리 영역)
// [스택] -> 

void Area()
{
	int position = 0;
	position++;
	printf("position 변수의 값 : %d\n", position);
} // <- 여기서 position 변수의 메모리는 소멸

// 반환형
// 함수의 실행이 끝나고 함수에게 전달하는 결과 값
// void는 자료형이 없으므로 반환형이 필요없음
// 자료형이 있는 함수는 자료형에 알맞는 결괏값을 돌려주어야 함

int Calculator()
{
	return 10;
}

// 함수의 자료형과 반환하는 값의 형태가 일치하지 않으면 원하는 결과 값을 얻을 수 없음
float Divide(float x, float y)
{
	return x / y;
}

// 사용자 정의 함수를 사용하려면 main()함수에서 무조건 호출
void main()
{
	// 함수
	/*
	// 하나의 특별한 목적의 작업을 수행하기 위해 독립적으로 설계된 코드의 집합
	// 매개변수를 선언한 함수는 함수를 호출할 때 인수를 넣어주어야 함
	// 호출하는 함수의 이름 정확하게 넣어주어야 함
	Function(); // < 함수의 호출
	Function();
	*/

	// 인수
	/*
	// 함수가 호출될 때 매개변수에 실제로 전달되는 값
	int value = 100;
	Temp(value); // value <- ); // 10(x), 20(y)
	Add(10, 20);
	*/

	// 지역 변수
	/*
	// { } 내에서 선언된 변수로 { } 내에서만 사용할 수 있으며, { }를 벗어나면 소멸
	int x = 10;
	{
		int x = 20;
		printf("중괄호 안에 있는 x의 주소 : %p\n", &x);
	}
	x = 100;
	printf("변수 x의 주소 : %p\n", &x); // x
	count++;
	Minus();
	Home();
	Home();
	Home();
	Area();
	Area();
	Area();
	*/

	printf("함수의 값 : %d\n", Calculator());

	int memory = Calculator();
	printf("memory 변수의 값 : %d\n", memory);

	printf("나누기 함수의 값 : %f\n", Divide(5, 2));
