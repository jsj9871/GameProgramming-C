#include <stdio.h>


int main()
{
    // ����� ���� ����
    /*
    const int value = 10;

    printf("value ������ �� : %d", value);

    // value�� ���� const�� ���ȭ�Ǿ����Ƿ� �ٲ� �� ����
    // value = 20;

    // �ɺ��� ��� : �޸� ������ ������ �ִ� ��� ex) const int data
    // ���ͷ� ��� : �޸� ������ ���� ��� ex) 10, "Count"
    */

    // ������ ���
    /*
    int variable = 10;
    int variable2 = 20;

    const int a = 10;
    // const�� �ڷ��� * �տ� ���� �Ǹ� �������� �޸� ���� ���ȭ
    int* const pointer = &variable;

    //pointer = &variable2;

    //printf("pointer������ ����Ű�� �� : %d", *pointer);

    // pointer : ������ ���� ��ü (�޸� �ּ� ������ �� ���)
    // *pointer : �����Ͱ� ����Ű�� �޸� ������ �� ���

    *pointer = 30;
    variable = 50;
    */

    // ��� ���� ������
    int data = 10;
    int data2 = 20;

    const int* pointer = &data;

    pointer = &data2;

    // ��� ���� �����ʹ� ����Ű�� ������ ������ ���ȭ
    // ����Ű�� �ִ� �޸� ������ ���ȭ X
    data2 = 30;

    // *pointer = 100;

    // string -> [H][e][l][l][o][\0]
    // OS read only Data ������ ������ �� ������ ����
    const char* string = "Hello";

    // *string = 'A';
    string = "LOL";

    return 0;
}
