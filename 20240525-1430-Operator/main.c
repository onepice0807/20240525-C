#include <stdio.h>

int* pSetScore(int value) {
	int sum = 0; // �ڵ�����

	sum += value;

	return &sum; // pSetScore�Լ� ������ ���� �ڵ������� �ּҰ��� ����
}

int* pSetScoreStatic(int value) {
	static int sum = 0; // ��������

	sum += value;

	return &sum; // pSetScoreStatic�Լ� ������ ���� ���������� �ּҰ��� ����
}

int main() {
	printf("pSetScore �Լ�\n");
	int* pScore = pSetScore(100);
	printf("*pScore = %d\n", *pScore);
	printf("*pScore = %d\n", *pScore);
	printf("*pScore = %d\n", *pScore);

	printf("\n\npSetScoreStatic\n");
	pScore = pSetScoreStatic(2000);
	printf("*pScore = %d\n", *pScore);
	printf("*pScore = %d\n", *pScore);
	printf("*pScore = %d\n", *pScore);


	return 0;


}