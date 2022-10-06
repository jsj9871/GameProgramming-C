#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 텍스트 파일 불러옴
void LoadFile(const char* text)
{
    FILE* file = fopen(text, "r");

    char buffer[10000] = { 0, };

    fread(buffer, 1, 10000, file);

    printf("%s", buffer);

    fclose(file);
}

int main()
{
    // 서울 2033 (선택지) 게임
    /*
    int scene = 1;

    switch (scene)
    {
        case 1: // 첫번째 맵
            LoadFile("Resources/SeoulTitle.txt");

        case 2: // 두번째 맵
            LoadFile("Resources/SeoulTitle.txt");

        case 3: // 세번째 맵
            LoadFile("Resources/SeoulTitle.txt");

        case 4: // 네번째 맵
            LoadFile("Resources/SeoulTitle.txt");

        case 5: // 다섯번째 맵
            LoadFile("Resources/SeoulTitle.txt");
    }
    */

    return 0;
}
