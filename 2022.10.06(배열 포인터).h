#include <stdio.h>

void CallByValue(int x)
{
    x = 100;
    printf("함수 내부에 있는 값 : %d\n", x);
}

void CallByReference(int* x)
{
    *x = 100;
}

int main()
{
    // scanf 함수 변수 입력
    /*
    int value = 0;
    int value2 = 0;

    scanf_s("value : %d, value2 : %d\n", &value, &value2);

    printf("value의 값 : %d, value2의 값 : %d", value, value2);
    */

    // scanf 함수 배열 입력
    /*
    char name[10];

    // 배열의 크기는 컴파일 시점에 크기가 정해짐
    // 배열의 크기를 명시적으로 scanf_s()에게 알려주어야 함
    scanf_s("%s", name, sizeof(name));

    printf("%s", name);
    */

    // 오븐 시계

    /*int A, B;
    scanf_s("%d %d", &A, &B);

    int C;
    scanf_s("%d", &C);

    if ((A >= 0 && A <= 23) && (B >= 0 && B <= 59))
    {
        printf("%d %d", A, B);
    }*/

    int hour = 0;
    int minute = 0;
    int timer = 0;

    // 몇시, 몇분, 추가적으로 들어가는 분
    scanf_s("%d%d%d", &hour, &minute, &timer);

    minute += timer;

    //   120
    if (minute > 59)
    {
        //      120
        while (minute >= 60)
        {
            minute = minute - 60;
            hour++; // 19
        }

        if (hour >= 24)
        {
            hour -= 24;
        }
        // 23 (48 + 25)
        // hour(0) : minute(13)
        // timer(25)
    }

    printf("%d %d", hour, minute);

    // 값에 의한 전달과 참조에 의한 전달
    /*
    printf("%d\n", value);

    CallByValue(value);

    printf("%d\n", value);

    CallByReference(&value);
    */

    return 0;
}
