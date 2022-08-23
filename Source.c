#include <stdio.h>

void main()
{
	// 포인터의 크기
	/*
	double value = 9.36;
	double x = 10.97;
	// 포인터 변수를 저장하기 위해 주소 값을 저장할 변수의 자료형과 포인터 변수의 자료형이 일치해야 합니다.
	double * ptr = &value;
	printf("ptr의 값 : %lf\n", *ptr);
	printf("ptr 포인터 변수의 크기 : %d\n", sizeof(ptr));
	// ptr 변수가 가리키는 주소를 value에서 라는 x라는 변수의 주소로 변경합니다.
	ptr = &x;
	printf("ptr의 값 : %lf\n", *ptr);
	*ptr = 20.52;
	printf("ptr의 값 : %lf\n", *ptr);
	*/

	// 배열
	/*
	// 같은 자료형의 변수들로 이루어진 유한 집합입니다.

	//   0    1    2    3   4
	// [10] [20] [30] [40] [50] <- 배열의 요소(인덱스)
	// 4 byte 메모리 공간으로 5개의 연속적인 메모리 공간을 생성합니다.
	int array[5];
	// 배열의 경우 첫 번째 원소는 0부터 시작합니다.
	array[0] = 10;
	array[1] = 20;
	array[2] = 30;
	array[3] = 40;
	array[4] = 50;
	// 배열의 크기를 벗어나서 저장할 수 없습니다.
	// array[5] = 100;
	printf("array의 첫 번째 값 : %d\n", array[0]);
	printf("array의 두 번째 값 : %d\n", array[1]);
	printf("array의 세 번째 값 : %d\n", array[2]);
	printf("array의 네 번째 값 : %d\n", array[3]);
	printf("array의 다섯 번째 값 : %d\n", array[4]);
	printf("array의 크기 : %d\n", sizeof(array));
	*/

	// 배열의 초기화
	/*
	// 0번째 요소(10) 1번째 요소(5) 2번째 요소(0)
	int room [3] = { 10,5,0 };
	// 배열의 크기를 구하는 방법
	// 배열의 크기 / 배열의 자료형
	int size = sizeof(room) / sizeof(int);
	for (int i = 0; i < size; i++)
	{
		printf("room %d 번째 요소 : %d\n", i, room[i]);
	}

	// 배열의 크기를 생략할 수 있으며, 초기화 목록에 설정된   수를 컴파일러가 자동으로 계산해줍니다.
	double team[ ] = { 5.1, 6.8, 7.7, 49.63, 11.07};
	printf("team 배열의 크기 : %d\n", sizeof(team));
	for (int i = 0; i < 5; i++)
	{
		team[i] = 0;
		printf("%d 번째 요소의 값 : %d\n", i, team[i]);
	}
	*/
}	