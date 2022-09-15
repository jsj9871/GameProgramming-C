#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <mmsystem.h>

#pragma comment(lib, "winmm.lib")

enum textColor
{
    BLACK,
    BLUE,
    GREEN,
    SILVER,
    RED,
    OFTEN,
    YELLOW,
    WHITE,
    GRAY
};

void CursorActive()
{
    CONSOLE_CURSOR_INFO cursor;
    GetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor);

    // .bVisible = Ŀ�� ���� ���ο� ���� ����
    // 0�� �� ���콺 Ŀ�� ��Ȱ��ȭ
    // 1�� �� ���콺 Ŀ�� Ȱ��ȭ
    cursor.bVisible = 0;

    //  SetConsoleCursorInfo() : �����Ǿ� �ִ� �ܼ� ��ũ�� ���ۿ� ���Ͽ� Ŀ���� ���¸� ����
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor);
}

int main()
{
	// ���� ����
	/*
	// fopen()
	// ù ��° �Ű����� = �ؽ�Ʈ ������ �̸�
	// �� ��° �Ű����� = �ؽ�Ʈ ������ ����� ��� (read / write)
	FILE* filePointer = fopen("data.txt", "w");

	// fputs : ���Ͽ� ���ڸ� �ϳ��� ���� �Լ�
	fputs("ü��\n", filePointer);
	fputs("����\n", filePointer);
	fputs("���ݷ�\n", filePointer);

	// ������� ������ �ݾ���
	fclose(filePointer);
	*/

	// ���� �б�
    /*
	FILE* readPointer = fopen("Resources/Dragon.txt", "r");

	// text ������ ���� �����͸� ���� �� �ִ� ���� ����
	char buffer[10000] = { 0, };
			
	// ù ��° �Ű����� : �б� ���� ���� �迭�� ����
	// �� ��° �Ű����� : ũ�⸦ ������ �迭�� ����Ű�� ������
	// �� ��° �Ű����� : �о���� ������ ũ��� ������ ����Ʈ
	// �� ��° �Ű����� : �����͸� �Է� ���� ��Ʈ���� FILE ��ü�� ����Ű�� ������
	fread(buffer, 1, 10000, readPointer);

	printf("%s", buffer);

	fclose(readPointer);
    */

    /*
    // ����� 1 byte�� ǥ��
    // 0 ~ 255 (256)������ ������ ǥ�� ����
    // ���� : �ƽ�Ű �ڵ�
    char array[] = "Hello";

    // �ѱ��� 2 byte�� ������ ǥ��
    // �ʼ� 19��, �߼� 21��, ���� 28�ڷ� �̷������ 11172�� ǥ��
    // �ѱ� : �����ڵ�
    char korean[] = "�ȳ��ϼ���";
    */

    // SetConsoleTextAttribute() : �ؽ�Ʈ�� ������ �ٲ��ִ� �Լ�
    // 0 = ������
    // 1 = �Ķ���

    CursorActive();

    // ���� ȣ��
    // PlaySound�� wav���ϸ� ��� ����
    PlaySound(TEXT("Sound.wav"), 0, SND_FILENAME | SND_ASYNC | SND_LOOP);

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), WHITE);

	return 0;
}
