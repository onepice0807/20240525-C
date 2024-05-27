#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    FILE* fp;

    // ���Ͼ���
    fp = fopen("test.txt", "w");

    if (fp == NULL) {
        printf("���� ���⿡ ����\n");
        return;
    }

    fputc('a', fp);   // fputc: �� ���� ���� ����Լ�

    for (int i = 'a'; i <= 'z'; i++) {
        fputc((char)i, fp);
    }

    fclose(fp);   // ���� �ݱ�


    // ���� �б�
    // ���� ����
    fp = fopen("test.txt", "r"); // �б� ���

    if (fp == NULL) {
        printf("���� ���� ����\n");
        return;
    }

    char c;

    while ((c = fgetc(fp)) != EOF) {   // fgetc�� �ѹ��� �б�
        putchar(c);
    }

    fclose(fp);



    return 0;
}