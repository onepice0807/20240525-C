#include <stdio.h>

// ������ �迭

int main() {
	int array[5]; // ������ �迭
	int array2[5][5]; // ������ �迭

	int* parray = array;

	int(*parray)[5] = array2;


	array2[2][2] = 100; // �迭��
	*(*(array2 + 2) + 2) = 100; // �����ͽ�

	array2[3][3] = 300;

	*(*(array2 + 3) + 1) = 400;

	return 0;
}