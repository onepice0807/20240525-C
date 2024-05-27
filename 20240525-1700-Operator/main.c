#include <stdio.h>

// 이차원 배열

int main() {
	int array[5]; // 일차원 배열
	int array2[5][5]; // 이차원 배열

	int* parray = array;

	int(*parray)[5] = array2;


	array2[2][2] = 100; // 배열식
	*(*(array2 + 2) + 2) = 100; // 포인터식

	array2[3][3] = 300;

	*(*(array2 + 3) + 1) = 400;

	return 0;
}