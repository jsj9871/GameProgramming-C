#include <stdio.h>


int main()
{
    // 상수에 대한 이해
    /*
    const int value = 10;

    printf("value 변수의 값 : %d", value);

    // value의 값은 const로 상수화되었으므로 바꿀 수 없음
    // value = 20;

    // 심볼릭 상수 : 메모리 공간을 가지고 있는 상수 ex) const int data
    // 리터럴 상수 : 메모리 공간이 없는 상수 ex) 10, "Count"
    */

    // 포인터 상수
    /*
    int variable = 10;
    int variable2 = 20;

    const int a = 10;
    // const가 자료형 * 앞에 들어가게 되면 포인터의 메모리 공간 상수화
    int* const pointer = &variable;

    //pointer = &variable2;

    //printf("pointer변수가 가리키는 값 : %d", *pointer);

    // pointer : 포인터 변수 자체 (메모리 주소 저장한 값 출력)
    // *pointer : 포인터가 가리키는 메모리 공간의 값 출력

    *pointer = 30;
    variable = 50;
    */

    // 상수 지시 포인터
    int data = 10;
    int data2 = 20;

    const int* pointer = &data;

    pointer = &data2;

    // 상수 지시 포인터는 가리키는 포인터 변수를 상수화
    // 가리키고 있는 메모리 공간은 상수화 X
    data2 = 30;

    // *pointer = 100;

    // string -> [H][e][l][l][o][\0]
    // OS read only Data 영역을 접근할 수 없도록 설정
    const char* string = "Hello";

    // *string = 'A';
    string = "LOL";

    return 0;
}
