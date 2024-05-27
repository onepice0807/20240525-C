#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

// ���� 2���� �迭 

void SetArray(int** pparray, int column, int row) {
    for (int i = 0; i < column; i++) {
        for (int j = 0; j < row; j++) {
            pparray[i][j] = i * row + j;
        }
    }
}

void PrintArray(int** pparray, int column, int row) {
    for (int i = 0; i < column; i++) {
        for (int j = 0; j < row; j++) {
            printf("pparray[%d][%d] = %d\n", i, j, pparray[i][j]);
        }
    }

}

int main() {

    int column = 0;
    int row = 0;
    printf("������ �迭�� ����, ���� ������ �Է��ϼ���(10(��) 10(��)):");
    scanf("%d %d", &column, &row);

    int** pparray = (int**)malloc(sizeof(int*) * column);   // ���� ������ �迭�Ҵ�
    for (int i = 0; i < column; i++) {
        pparray[i] = (int*)malloc(sizeof(int) * row);   // ���� int�� �迭 �Ҵ�
    }

    pparray[2][2] = 300;

    *(*(pparray + 2) + 2) = 300;

    pparray[1][1] = 200;

    *(*(pparray + 1) + 1) = 200;

    SetArray(pparray, column, row);
    PrintArray(pparray, column, row);

    for (int i = 0; i < column; i++) {
        free(pparray[i]);   // ���� int �� �迭 ��ȯó��
    }

    free(pparray);   // ���� int �� ������ �迭 ��ȯó��

    return 0;
}