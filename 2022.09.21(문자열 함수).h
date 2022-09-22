#pragma once
#include <stdio.h>
#include <string.h>

void MYstrcat(char* str1, const char* str2)
{
    // str1이 NULL문자가 아니라면
    while (*str1 != '\0')
    {
        // str1이 가리키는 포인터 증가
        str1++;
    }

    while (*str2 != '\0')
    {
        *str1 = *str2;
        str1++;
        str2++;
    }
}

int main()
{
    // strump 문자열 비교 함수
    /*

    char memory1[] = { "ABCD" };    // 65 + 66 + 67 + 68 =
    char memory2[] = { "ABCT" };
    char memory3[] = { "ABCC" };

    // strump는 첫 번째 문자열 크기가 크면 양수(+1) 반환
    //          두 번째 문자열 크기가 크면 음수(-1) 반환
    //          두 개 문자열 크기가 같으면 0 반환
    printf("두 개의 문자열을 비교한 값 : %d\n", strcmp(memory1, memory2));
    printf("두 개의 문자열을 비교한 값 : %d\n", strcmp(memory1, memory3));

    // strcmp 영어 사전 순서로 우선 순위 결정

    // strncmp : 첫 번째 매개변수에 비교할 문자열
    // strncmp : 두 번째 매개변수에 비교할 문자열
    // strncmp : 세 번째 비교할 문자열 길이

    // ABC == ABC = 0
    printf("두 개의 문자열을 비교한 값 : %d\n", strncump(memory1, memory2, 5));
    */

    // strcat 문자열 연결 함수
    char name1[10] = { "Kim" };
    char name2[] = { "geum" };

    // strcat : 복사 받을 문자열 크기 넉넉히 지정
    // name1 [J][o][u][n][g][][][][][]
    // name2 [S][e][o][n][g][][][][][]
    //strcat_s(name1, 15, name2);
    //printf("name1의 문자열 : %s", name1);

    MYstrcat(name1, name2);

    return 0;
}
