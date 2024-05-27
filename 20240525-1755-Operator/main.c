#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int buff[] = { 100000, 20000, 30000, 40000, 5000000 };

    FILE* fp;

    fp = fopen("binary.bin", "wb");   // ���̳ʸ� ��� ����

    if (fp == NULL) {
        printf("���Ͽ��� ����");
        return;
    }

    int size = sizeof(buff[0]);
    int count = sizeof(buff) / sizeof(buff[0]);

    fwrite(buff, size, count, fp);
    fclose(fp);

    int output[5];
    fp = fopen("binary.bin", "rb");   // ���̳ʸ� ��� �б� ����

    if (fp == NULL) {
        printf("���� ���� ����");
        return;
    }

    fread(output, size, count, fp);   // ���̳ʸ� ��� �б�

    for (int i = 0; i < count; i++) {
        printf("output[%d] = %d\n", i, output[i]);
    }

    fclose(fp);

    return 0;
}