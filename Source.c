#include <stdio.h>
#include <string.h> // 문자열 관련 함수

struct Node
{
    int data;
    struct Node* pointer;
};

int main()
{
    // 자기 참조 구조체
    /*
    // 자신과 동일한 구조체를 가리킬 수 있는 포인터 변수를 멤버 변수로

    struct Node node1 = {10, NULL};
    struct Node node2 = {20, NULL};
    struct Node node3 = {30, NULL};

    struct Node* structPtr = &node1;

    printf("첫 번째 구조체 data의 값 : %d\n", structPtr->data);

    structPtr->pointer = &node2;

    printf("두 번째 구조체 data의 값 : %d\n", structPtr->pointer->data);

    structPtr->pointer->pointer = &node3;

    printf("세 번째 구조체 data의 값 : %d\n", structPtr->pointer->pointer->data);
    */

    // 문자열 함수
    
    // strlen - (문자열 길이 출력)
    char name[] = { "Bard" };

    strlen(name);
    printf("name의 값 : %s\n", name);

    // strlen() : NULL 문자 이전의 길이만 계산
    printf("name배열 길이 : %d\n", strlen(name));

    // strcpy - (문자열 복사)
    char A[10] = { "LEAGUE" };
    char B[10] = { "LEGEND" };

    // read only 영역에 있는 문자열 리터럴이기 때문에 값 변경 X
    const char* C = "Player";
    const char* D = "Monster";

    /*
    // A [10] = LEE
    // B [10] = DQ

    // A[0] = B[0]
    // A[1] = B[1]
    // A[2] = '\0'

    // A와 B는 문자열의 시작 주소 의미
    // 00FF44D0 <- 00DD22A0(B)
    //A[0] = B[0];    // L <- L
    //A[1] = B[1];    // E <- E
    //A[2] = B[2];    // A <- G
    //A[3] = B[3];    // G <- U
    //A[4] = B[4];
    //A[5] = B[5];

    int i = 0;
    while (A[i]) // NULL 문자는 0 의미
    {
        A[i] = B[i];
        i++;
    }   // while문의 값이 false로 변경

    printf("A의 문자열 : %s", A);
    */

    // strcpy의 첫 번째 매개변수는 복사 받을 문자열
    //          두 번째 매개변수는 복사할 문자열

    // strcpy_s의 첫 번째 매개변수는 복사 받을 문자열
    //          두 번째 매개변수는 복사할 메모리 크기
    //          세 번째 매개변수는 복사할 문자열
    strcpy_s(A, 10, B);
    printf("복사한 A 문자열의 값 : %s", A);

    // strcmp - (문자열 비교)
    // strcat - (문자열 연결)

    return 0;
}
