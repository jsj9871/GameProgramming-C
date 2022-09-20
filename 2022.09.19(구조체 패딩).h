#pragma once
#include <stdio.h>

struct Object
{
    // ����ü�� ���� �س��� ���´� �޸� ���� X
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

    // [] [] [] [] [] [] [] [] / [] [](6byte padding) / size 8 byte ����
};

struct Animal
{
    int leg;
    double size;
};

int main()
{
    // ����Ʈ �е�
    /*
    // ��� ������ �޸𸮿��� CPU�� ���� �� �� ���� ���� �� �ֵ���
    // �����Ϸ��� ���������� ��Ͽ� ���߾� ����Ʈ�� �е� ���ִ� ����ȭ �۾�

    // ����ü�� ��������� ��� ������ �޸𸮰� ����Ƿ�
    // ��� ������ ������ �ʱ�ȭ ����
    struct Object character = { 10, 100, 3.5f };
    struct Data data = { 10, 10 };

    // ����ü ũ���� ��� ��� ������ ������ ���� �޸� ũ�� �ٸ��� ������ �� ������,
    // ����ü ũ�⸦ �����ϴ� ���´� �⺻ �ڷ������θ� ����
    struct Monster dragon = {100, 30.5f, 10};

    struct Shape circle;

    // const char * name ---> Circle
    // char [10] name ---> memcpy (�޸� ���� �Լ�)
    // "Circle" --> name �迭�� �޸� ����
    // circle.name = "Circle";

    printf("Data ����ü�� ũ�� : %d\n", sizeof(data));
    printf("Object ����ü�� ũ�� : %d\n", sizeof(character));
    printf("Monster ����ü�� ũ�� : %d\n", sizeof(dragon));
    printf("Shape ����ü�� ũ�� : %d\n", sizeof(circle));

    // align ��Ģ
    // CPU�� �����͸� ���� ��
    // Ȧ�� X / ¦�� O -> 2, 4, 8 byte
    // 32 bit OS���� 4 byte�� �޸𸮸� �а�, 64bit OS������ 8 byte�� ����

    // ����ü�� ũ��� ����ü�� �����ϴ� ��� �߿�
    // ũ�Ⱑ ���� ū �ڷ����� ����� �ǵ��� ����
    */

    // ����ü ������
    /*
    // ����ü�� ����Ű�� ������

    // ����ü ������ ����
    struct Animal* pointer;
    printf("����ü �������� ũ�� : %d\n", sizeof(pointer));

    struct Animal cat;

    // ����ü �ּҴ� ����ü ù��° ��� ������ �ִ� ���� �ּ� �ǹ�
    printf("����ü cat�� �ּ� : %p\n", &cat);
    printf("����ü cat�� leg �ּ� : %p\n", &cat.leg);
    printf("����ü cat�� size �ּ� : %p\n", &cat.size);

    pointer = &cat;

    // ����ü �����ͷ� ����ü�� �ִ� �޸� ���� �� ��
    // -> ������ ���
    pointer->leg = 200;
    pointer->size = 90.3f;

    // ��� �����ڸ� ����Ϸ��� ������ �켱 ������ ���߾� �ۼ�
    pointer->leg = 400;
    pointer->size = 50.6f;

    printf("����ü ������ ������ leg�� �� : %d\n", pointer->leg);
    printf("����ü ������ ������ size�� �� : %lf\n", pointer->size);
    */

    // C��� ���� �Ⱓ 2��

    return 0;
}
