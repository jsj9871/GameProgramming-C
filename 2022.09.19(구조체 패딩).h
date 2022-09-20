#pragma once
#include <stdio.h>

struct Object
{
    // 구조체는 선언만 해놓은 상태는 메모리 생성 X
    short size; // 2 BYTE
    int height; // 4 BYTE
    double position;    // 8 BYTE
};

struct Monster
{
    int health; // 4 BYTE
    double attack;  // 8 BYTE
    short defense;  // 2 BYTE
};

struct Data
{
    int x;  // 4 BYTE
    int y;  // 4 BYTE
};

struct Shape
{
    char name[10];   // 10 BYTE
    double size;    // 8 BYTE

    // [] [] [] [] [] [] [] [] / [] [](6byte padding) / size 8 byte 변수
};

struct Animal
{
    int leg;
    double size;
};

int main()
{
    // 바이트 패딩
    /*
    // 멤버 변수를 메모리에서 CPU로 읽을 때 한 번에 읽을 수 있도록
    // 컴파일러가 레지스터의 블록에 맞추어 바이트를 패딩 해주는 최적화 작업

    // 구조체는 정의해줘야 멤버 변수의 메모리가 생기므로
    // 멤버 변수의 데이터 초기화 가능
    struct Object character = { 10, 100, 3.5f };
    struct Data data = { 10, 10 };

    // 구조체 크기의 경우 멤버 변수의 순서에 따라 메모리 크기 다르게 설정될 수 있으며,
    // 구조체 크기를 결정하는 형태는 기본 자료형으로만 구성
    struct Monster dragon = {100, 30.5f, 10};

    struct Shape circle;

    // const char * name ---> Circle
    // char [10] name ---> memcpy (메모리 복사 함수)
    // "Circle" --> name 배열에 메모리 복사
    // circle.name = "Circle";

    printf("Data 구조체의 크기 : %d\n", sizeof(data));
    printf("Object 구조체의 크기 : %d\n", sizeof(character));
    printf("Monster 구조체의 크기 : %d\n", sizeof(dragon));
    printf("Shape 구조체의 크기 : %d\n", sizeof(circle));

    // align 규칙
    // CPU가 데이터를 읽을 때
    // 홀수 X / 짝수 O -> 2, 4, 8 byte
    // 32 bit OS에서 4 byte씩 메모리를 읽고, 64bit OS에서는 8 byte씩 읽음

    // 구조체의 크기는 구조체를 구성하는 멤버 중에
    // 크기가 가장 큰 자료형의 배수가 되도록 정렬
    */

    // 구조체 포인터
    /*
    // 구조체를 가리키는 포인터

    // 구조체 포인터 선언
    struct Animal* pointer;
    printf("구조체 포인터의 크기 : %d\n", sizeof(pointer));

    struct Animal cat;

    // 구조체 주소는 구조체 첫번째 멤버 변수에 있는 시작 주소 의미
    printf("구조체 cat의 주소 : %p\n", &cat);
    printf("구조체 cat의 leg 주소 : %p\n", &cat.leg);
    printf("구조체 cat의 size 주소 : %p\n", &cat.size);

    pointer = &cat;

    // 구조체 포인터로 구조체에 있는 메모리 접근 할 때
    // -> 연산자 사용
    pointer->leg = 200;
    pointer->size = 90.3f;

    // 멤버 연산자를 사용하려면 연산자 우선 순위에 맞추어 작성
    pointer->leg = 400;
    pointer->size = 50.6f;

    printf("구조체 포인터 접근한 leg의 값 : %d\n", pointer->leg);
    printf("구조체 포인터 접근한 size의 값 : %lf\n", pointer->size);
    */

    // C언어 포폴 기간 2주

    return 0;
}
