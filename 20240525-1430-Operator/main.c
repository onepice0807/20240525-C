#include <stdio.h>

int* pSetScore(int value) {
	int sum = 0; // 자동변수

	sum += value;

	return &sum; // pSetScore함수 블럭에서 만든 자동변수의 주소값을 리턴
}

int* pSetScoreStatic(int value) {
	static int sum = 0; // 정적변수

	sum += value;

	return &sum; // pSetScoreStatic함수 블럭에서 만든 정적변수의 주소값을 리턴
}

int main() {
	printf("pSetScore 함수\n");
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