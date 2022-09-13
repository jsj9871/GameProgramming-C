#include <stdio.h>

// 함수의 원형
// 호출할 함수를 컴파일러에게 미리 알려주는 과정  
// 단일 패스 컴파일(O), 멀티 패스 컴파일
void Function(char* name, void* value);

void Integer(int x)
{
	printf("Integer 함수의 x 값 : %d\n", x);
}

void Decimal(float x)
{
	printf("Decimal 함수의 x 값 : %f\n", x);
}

void Character(char x)
{
	printf("Character 함수의 x 값 : %c\n", x);
}

// Swap 함수에서 값을 바꾸는 로직을 만들어라
void Swap(int x, int y)
{
	// 매개 변수에 x(10), y(20)
	// 지역 변수 temp = y(20)
	int temp = y;

	// y(10) <- x(10)
	y = x;

	// x(20) <- tmep(20) 
	x = temp;
}

void Plus(int x, int y)
{
	printf("더하기 함수의 결과 : %d", x + y);
}

void main()
{
	// 범용(void) 포인터
	/*
	// 자료형이 정해지지 않은 상태로 모든 자료형을 저장할 수 있는 포인터
	int value = 10;
	void * ptr = &value;
	// 범용 포인터는 메모리 주소에 접근해서 값을 변경 X
	*(int *)ptr = 20;
	printf("ptr이 가리키는 값 : %d\n", *(int *)ptr);
	// 범용 포인터로 변수의 메모리에 접근하려면 범용 포인터가 가리키는
	// 변수의 자료형으로 형 변환을 해주어야 함
	float decimal = 10.5;
	ptr = &decimal;
	*(float*) ptr = 20.5;
	printf("ptr이 가리키는 값 : %f\n", *(float*) ptr);

	// 내가 함수에 입력하는 데이터(변수)가 출력되도록 하고 싶을 때
	// char(문자) int(정수) float(실수)
	//Integer(50);
	//Character('A');
	//Decimal(10.5);
	int A = 10;
	float B = 99.6;
	char C = 'R';
	Function("int", &A); // <-
	Function("float", &B);
	Function("char", &C);
	*/

	// 두 개의 변수의 값 바꿔라
	// 하나의 임시 변수를 만들어서 거기에 값을 보관했다가 옮기면 됨
	int A = 10;
	int B = 20;

	//printf("변수 A의 값 : %d, 변수 B의 값 : %d\n", A, B);

	//  10  20
	// 값에 의한 호출
	// 함수 호출 시 전달되는 변수의 값을 복사하여
	// 함수의 인자로 전달하는 방법
	Swap(A, B);
	Plus(10, 20);
	//printf("변수 A의 값 : %d, 변수 B의 값 : %d\n", A, B);

	// 더하기 함수 (2개의 매개 변수)
	// 2개 인수에 값이 넣어서 계산되는 결괏값을 출력
	// 함수(10,20) = 30

	// 빼기 함수 (2개의 매개 변수)
	// 2개 인수에 값이 넣어서 계산되는 결괏값을 출력
	// 함수(5,5) = 0

	// 곱셈 함수 (2개의 매개 변수)
	// 2개 인수에 값이 넣어서 계산되는 결괏값을 출력
	// 함수(5,5) = 25 

	// 나눗셈 함수 (2개의 매개 변수)
	// 2개 인수에 값이 넣어서 계산되는 결괏값을 출력
	// 함수(10,10) = 1 
}

void Function(const char* name, void* value)
{
	printf("%p\n", name); // name 변수의 시작 주소 ex) 00FF55DA
	printf("%s\n", name); // name 변수의 문자열 int == int					 

	// if문이 비교되는 원리는 %s로 구분
	if (name == "int")
	{
		printf("%d\n", *(int*)value);
	}
	else if (name == "float")
	{
		printf("%f\n", *(float*)value);
	}
	else if (name == "char")
	{
		printf("%c\n", *(const char*)value);
	}
}