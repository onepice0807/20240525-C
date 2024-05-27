#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

// 동적 2차원 배열 

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
    printf("이차원 배열의 가로, 세로 갯수를 입력하세요(10(행) 10(열)):");
    scanf("%d %d", &column, &row);

    int** pparray = (int**)malloc(sizeof(int*) * column);   // 동적 포인터 배열할당
    for (int i = 0; i < column; i++) {
        pparray[i] = (int*)malloc(sizeof(int) * row);   // 동적 int형 배열 할당
    }

    pparray[2][2] = 300;

    *(*(pparray + 2) + 2) = 300;

    pparray[1][1] = 200;

    *(*(pparray + 1) + 1) = 200;

    SetArray(pparray, column, row);
    PrintArray(pparray, column, row);

    for (int i = 0; i < column; i++) {
        free(pparray[i]);   // 동적 int 형 배열 반환처리
    }

    free(pparray);   // 동적 int 형 포인터 배열 반환처리

    return 0;
}