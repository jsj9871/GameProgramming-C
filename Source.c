#include <stdio.h>
#include <string.h> // ���ڿ� ���� �Լ�

struct Node
{
    int data;
    struct Node* pointer;
};

int main()
{
    // �ڱ� ���� ����ü
    /*
    // �ڽŰ� ������ ����ü�� ����ų �� �ִ� ������ ������ ��� ������

    struct Node node1 = {10, NULL};
    struct Node node2 = {20, NULL};
    struct Node node3 = {30, NULL};

    struct Node* structPtr = &node1;

    printf("ù ��° ����ü data�� �� : %d\n", structPtr->data);

    structPtr->pointer = &node2;

    printf("�� ��° ����ü data�� �� : %d\n", structPtr->pointer->data);

    structPtr->pointer->pointer = &node3;

    printf("�� ��° ����ü data�� �� : %d\n", structPtr->pointer->pointer->data);
    */

    // ���ڿ� �Լ�
    
    // strlen - (���ڿ� ���� ���)
    char name[] = { "Bard" };

    strlen(name);
    printf("name�� �� : %s\n", name);

    // strlen() : NULL ���� ������ ���̸� ���
    printf("name�迭 ���� : %d\n", strlen(name));

    // strcpy - (���ڿ� ����)
    char A[10] = { "LEAGUE" };
    char B[10] = { "LEGEND" };

    // read only ������ �ִ� ���ڿ� ���ͷ��̱� ������ �� ���� X
    const char* C = "Player";
    const char* D = "Monster";

    /*
    // A [10] = LEE
    // B [10] = DQ

    // A[0] = B[0]
    // A[1] = B[1]
    // A[2] = '\0'

    // A�� B�� ���ڿ��� ���� �ּ� �ǹ�
    // 00FF44D0 <- 00DD22A0(B)
    //A[0] = B[0];    // L <- L
    //A[1] = B[1];    // E <- E
    //A[2] = B[2];    // A <- G
    //A[3] = B[3];    // G <- U
    //A[4] = B[4];
    //A[5] = B[5];

    int i = 0;
    while (A[i]) // NULL ���ڴ� 0 �ǹ�
    {
        A[i] = B[i];
        i++;
    }   // while���� ���� false�� ����

    printf("A�� ���ڿ� : %s", A);
    */

    // strcpy�� ù ��° �Ű������� ���� ���� ���ڿ�
    //          �� ��° �Ű������� ������ ���ڿ�

    // strcpy_s�� ù ��° �Ű������� ���� ���� ���ڿ�
    //          �� ��° �Ű������� ������ �޸� ũ��
    //          �� ��° �Ű������� ������ ���ڿ�
    strcpy_s(A, 10, B);
    printf("������ A ���ڿ��� �� : %s", A);

    // strcmp - (���ڿ� ��)
    // strcat - (���ڿ� ����)

    return 0;
}
