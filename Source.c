#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// �ؽ�Ʈ ���� �ҷ���
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
    // ���� 2033 (������) ����
    /*
    int scene = 1;

    switch (scene)
    {
        case 1: // ù��° ��
            LoadFile("Resources/SeoulTitle.txt");

        case 2: // �ι�° ��
            LoadFile("Resources/SeoulTitle.txt");

        case 3: // ����° ��
            LoadFile("Resources/SeoulTitle.txt");

        case 4: // �׹�° ��
            LoadFile("Resources/SeoulTitle.txt");

        case 5: // �ټ���° ��
            LoadFile("Resources/SeoulTitle.txt");
    }
    */

    return 0;
}
