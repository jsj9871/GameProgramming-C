#include <stdio.h>
#include <math.h> // 수학 관련 헤더 파일

struct Player
{
	int x;
	int y;
};

struct Monster
{
	int x;
	int y;
};

void ParameterArray(int array[])
{
	for (int i = 0; i < 5; i++)
	{
		array[i] = 10;
	}
}


int main()
{
	// 두 점 사이의 거리
	/*
	struct Player character = {0, 0};
	struct Monster dragon = {3, 5};
	// character와 dragon의 거리를 구해주세요.
	printf
	(
		"두 점 사이의 거리 : %lf",
		sqrt(pow(character.x - dragon.x, 2) + pow(character.y - dragon.y, 2))
	);
	*/

	// Lvalue vs Rvalue
	/*
	// Lvalue
	// 표현식 이후에도 사라지지 않는 값이며, 이름을 지니고 있는 변수입니다.
	// Rvalue
	// 표현식 이후에 사라지는 값이며, 임시 변수
	// 10,20 <- Rvalue
	// a, b <- Lvalue
	// Lvalue는 Rvalue로도 사용할 수 있음
	int a = 10;
	int b = 20;

	// a + b : 임시 변수
	int result = a + b;
	// Lvalue에 상수를 사용할 수 없음
	// 10 = a;
	// a + b = 10;
	printf("result의 변수의 값 : %d", result);
	// 전위 증감, 후위 증감
	// 전위 증감같은 경우에는 Lvalue랑 Rvalue로 사용할 수 있음
	// 후위 증감같은 경우에는 Rvalue로만 사용이 가능
	int x = 0;
	int y = 0;
	// 전위 증가는 증가된 자기 자신(변수)을 반환
	++y;
	// 후위 증가는 증가된 복사본을 반환
	x++;
	*/

	// [0] [0] [0] [0] [0]
	int room[5] = { 0, };

	for (int i = 0; i < 5; i++)
	{
		printf("%d  ", room[i]);
	}

	// room이라는 이름은 배열의 시작 주소를 의미
	ParameterArray(room);

	printf("\n");

	for (int i = 0; i < 5; i++)
	{
		printf("%d  ", room[i]);
	}


	return 0;
}