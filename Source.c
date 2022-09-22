#define _CRT_SECURE_NO_WARNINGS // strcpy 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>
#include <string.h>

// Typedef
/*
// 이미 사용되는 자료형을 다른 새로운 자료형으로 재정의할 수 있도록 해주는 키워드
typedef int INT32;  // int == INT32

// typedef로 구조체 선언할 때 _이름으로 선언하고

typedef struct _Player
{
    int x;
    int y;
    char name[20];
    const char* shape;
}Player;
*/

int main()
{
    // typedef
    /*
    int a = 10;
    INT32 b = 20;

    printf("a의 값 : %d\n", a);
    printf("b의 값 : %d\n", b);

    Player player;

    // 
    char nickName1[] = { "Jason" };

    strcpy(player.name, nickName1);

    printf("player의 이름 : %s", player.name);
    */

    // 문제이름 : 합
    /*
    // 입력 값 n이 주어졌을때, 1부터 n까지의 합 구하는 프로그램

    // 예제 입력
    // n = 4

    // 예제 출력
    // 10

    int n = 0;  // 입력 값 n 변수
    int sum = 0;    // 누적해서 값을 출력하는 변수

    scanf_s("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }

    printf("결과 값 : %d", sum);
    */

    // 문제 : 역순 별 찍기
    /*
    // 예제 출력
    //     *
    //    **
    //   ***
    //  ****
    // *****

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5 - i; j++)
        {
            printf(" ");
        }

        for (int k = 1; k <= i; k++)
        {
            printf("*");
        }

        printf("\n");
    }
    */

    return 0;
}
