#pragma once
#include <stdio.h>
#include <string.h>

void MYstrcat(char* str1, const char* str2)
{
    // str1�� NULL���ڰ� �ƴ϶��
    while (*str1 != '\0')
    {
        // str1�� ����Ű�� ������ ����
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
    // strump ���ڿ� �� �Լ�
    /*

    char memory1[] = { "ABCD" };    // 65 + 66 + 67 + 68 =
    char memory2[] = { "ABCT" };
    char memory3[] = { "ABCC" };

    // strump�� ù ��° ���ڿ� ũ�Ⱑ ũ�� ���(+1) ��ȯ
    //          �� ��° ���ڿ� ũ�Ⱑ ũ�� ����(-1) ��ȯ
    //          �� �� ���ڿ� ũ�Ⱑ ������ 0 ��ȯ
    printf("�� ���� ���ڿ��� ���� �� : %d\n", strcmp(memory1, memory2));
    printf("�� ���� ���ڿ��� ���� �� : %d\n", strcmp(memory1, memory3));

    // strcmp ���� ���� ������ �켱 ���� ����

    // strncmp : ù ��° �Ű������� ���� ���ڿ�
    // strncmp : �� ��° �Ű������� ���� ���ڿ�
    // strncmp : �� ��° ���� ���ڿ� ����

    // ABC == ABC = 0
    printf("�� ���� ���ڿ��� ���� �� : %d\n", strncump(memory1, memory2, 5));
    */

    // strcat ���ڿ� ���� �Լ�
    char name1[10] = { "Kim" };
    char name2[] = { "geum" };

    // strcat : ���� ���� ���ڿ� ũ�� �˳��� ����
    // name1 [J][o][u][n][g][][][][][]
    // name2 [S][e][o][n][g][][][][][]
    //strcat_s(name1, 15, name2);
    //printf("name1�� ���ڿ� : %s", name1);

    MYstrcat(name1, name2);

    return 0;
}
