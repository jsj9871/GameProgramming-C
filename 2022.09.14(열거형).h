#include <stdio.h>

// 열거형
/*
// 반드시 하나의 값만 가지게 될 변수들의 집합체
// Day라는 열겨형이 생성
// 열거형은 정수값으로 정의
enum State
{
   // 열거형 초깃값을 명시하지 않으면 가장 처음에 있는 열거형 멤버 변수는 0이라는 값으로 초기화
   IDLE,	// <- 가장 먼저 선언한 열거형 변수가 첫 번째 멤버 변수
   ATTACK,	// 열거형에 값을 변경할 수 있지만, 그 뒤에 있는 열거형 멤버 변수들의 값도 함께 바뀜
   JUMP,
   DEATH
};
*/

int main()
{
	// 열거형 변수를 선언
	/*
	enum State state;
	// 캐릭터 상태를 대기 상태로 지정
	state = IDLE;
	switch (state)
	{
	   case IDLE : printf("대기 상태");
			break;
	   case ATTACK : printf("공격 상태");
		   break;
	   case JUMP : printf("점프 상태");
		   break;
	   case DEATH : printf("죽음 상태");
		   break;
	}
	*/



	return 0;
}
