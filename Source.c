#include <stdio.h>

void CallByValue(int x)
{
    x = 100;
    printf("�Լ� ���ο� �ִ� �� : %d\n", x);
}

void CallByReference(int * x)
{
    *x = 100;
}

int main()
{
    // scanf �Լ� ���� �Է�
    /*
    int value = 0;
    int value2 = 0;
    
    scanf_s("value : %d, value2 : %d\n", &value, &value2);

    printf("value�� �� : %d, value2�� �� : %d", value, value2);
    */

    // scanf �Լ� �迭 �Է�
    /*
    char name[10];

    // �迭�� ũ��� ������ ������ ũ�Ⱑ ������
    // �迭�� ũ�⸦ ��������� scanf_s()���� �˷��־�� ��
    scanf_s("%s", name, sizeof(name));

    printf("%s", name);
    */

    // ���� �ð�
    
    int A, B;
    scanf_s("%d %d", &A, &B);

    int C;
    scanf_s("%d", &C);

    if ((A >= 0 && A <= 23) && (B >= 0 && B <= 59))
    {
        printf("%d %d", A, B);
    }

    // ���� ���� ���ް� ������ ���� ����
    /*
    printf("%d\n", value);

    CallByValue(value);

    printf("%d\n", value);

    CallByReference(&value);
    */

    return 0;
}
