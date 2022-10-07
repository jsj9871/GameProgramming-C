#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <windows.h>

// 텍스트 파일 불러옴
void LoadFile(const char* text)
{
    FILE* file = fopen(text, "r");

    char buffer[10000] = { 0, };

    fread(buffer, 1, 10000, file);

    printf("%s", buffer);

    fclose(file);
}

// 좌표 정보 X와 Y값을 받는 함수
void gotoXY(int x, int y)
{
    // x와 y 좌푯값을 설정
    COORD position = { x , y };

    // 좌표 위치를 이동시켜주는 함수
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);
}

int main()
{
    // 서울 2033 (선택지) 게임

    int x = 15;
    int y = 60;

    int scene = 1;

    char key;

    while (1)
    {
        switch (scene)
        {
        case 1: // 첫번째 맵
            LoadFile("Resources/SeoulTitle.txt");
            break;

        case 2: // 두번째 맵
            LoadFile("Resources/Dog.txt");
            break;

        case 3: // 세번째 맵
            LoadFile("Resources/Bird.txt");
            break;
        }

        gotoXY(20, y);
        printf("사람");

        gotoXY(85, y);
        printf("거북이");

        gotoXY(x, y);
        printf("☞");

        key = _getch();

        switch (key)
        {
        case 75:    // ← 입력
            if (x > 15)
                x -= 65;
            break;

        case 77:   // → 입력
            if (x < 80)
                x += 65;
            break;
        }

        if (GetAsyncKeyState(VK_SPACE))
        {
            scene++;
        }

        system("cls");
    }
    /*
    int scene = 1;

    switch (scene)
    {
        case 1: // 첫번째 맵
            LoadFile("Resources/SeoulTitle.txt");

        case 2: // 두번째 맵
            LoadFile("Resources/Dog.txt");

        case 3: // 세번째 맵
            LoadFile("Resources/Bird.txt");

        case 4: // 네번째 맵
            LoadFile("Resources/SeoulTitle.txt");

        case 5: // 다섯번째 맵
            LoadFile("Resources/SeoulTitle.txt");
    }
    */

    return 0;
}
