#include <stdio.h>
// ���� �Լ� (�������Լ�, entry point)
// ���������
// int argc: ����� ������ ����
// char* argv[] : ����� ���ڷ� ���޵� ���ڿ��� ����� ���� �ּҰ��� ����� �迭

int main(int argc, char* argv[]) {
	
	printf("argc: %d\n", argc);

	for (int i = 0; i < argc; i++) {
		printf("argv[%d] = %s\n", i, argv[i]);
	}

	getch();

	return 0;
}