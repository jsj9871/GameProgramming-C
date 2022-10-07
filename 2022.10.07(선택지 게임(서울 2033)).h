#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <windows.h>

// �ؽ�Ʈ ���� �ҷ���
void LoadFile(const char* text)
{
    FILE* file = fopen(text, "r");

    char buffer[10000] = { 0, };

    fread(buffer, 1, 10000, file);

    printf("%s", buffer);

    fclose(file);
}

// ��ǥ ���� X�� Y���� �޴� �Լ�
void gotoXY(int x, int y)
{
    // x�� y ��ǩ���� ����
    COORD position = { x , y };

    // ��ǥ ��ġ�� �̵������ִ� �Լ�
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);
}

int main()
{
    // ���� 2033 (������) ����

    int x = 15;
    int y = 60;

    int scene = 1;

    char key;

    while (1)
    {
        switch (scene)
        {
        case 1: // ù��° ��
            LoadFile("Resources/SeoulTitle.txt");
            break;

        case 2: // �ι�° ��
            LoadFile("Resources/Dog.txt");
            break;

        case 3: // ����° ��
            LoadFile("Resources/Bird.txt");
            break;
        }

        gotoXY(20, y);
        printf("���");

        gotoXY(85, y);
        printf("�ź���");

        gotoXY(x, y);
        printf("��");

        key = _getch();

        switch (key)
        {
        case 75:    // �� �Է�
            if (x > 15)
                x -= 65;
            break;

        case 77:   // �� �Է�
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
        case 1: // ù��° ��
            LoadFile("Resources/SeoulTitle.txt");

        case 2: // �ι�° ��
            LoadFile("Resources/Dog.txt");

        case 3: // ����° ��
            LoadFile("Resources/Bird.txt");

        case 4: // �׹�° ��
            LoadFile("Resources/SeoulTitle.txt");

        case 5: // �ټ���° ��
            LoadFile("Resources/SeoulTitle.txt");
    }
    */

    return 0;
}
