#include <stdio.h>
#include <string.h>
// ���ڿ�.
// C���� ���ڿ� �Լ��� ���鶧
// ���ڹ迭�� ���ι��� �ּҰ��� �迭�� ����� ���� �����ؾ� �ϴ� �������� �ִ�.



// ���ڹ迭 ����Լ�
void PrintStringArray(char* str, int size) {
	for (int i = 0; i < size; i++) {
		putchar(str[i]); // �ѹ��ڸ� ����ϴ� �Լ�
	}
}

// ���ڿ� ����Լ�

void PrintString(char* pstr) {
	while (*pstr) {
		putchar(*pstr);
		pstr++;
	}
}


int main() {
	char str[] = { 'M', 'O', 'N' }; // ���ڹ迭
	char str2[] = "MON"; // ���ڿ�
	char str3[] = { 'M', 'O', 'N', '\0' }; // ���ڿ� \0(0) �����Ṯ��

	printf("str size = %d\n", sizeof(str));
	printf("str2 size = %d\n", sizeof(str2));
	printf("str3 size = %d\n", sizeof(str3));

	printf("PrintStringArray\n");
	PrintStringArray(str, sizeof(str));
	printf("\n");
	PrintStringArray(str2, sizeof(str2));
	printf("\n");
	PrintStringArray(str3, sizeof(str3));
	printf("\n");

	printf("\n");
	printf("PrintString\n");
	PrintString(str);
	printf("\n");
	PrintString(str2);
	printf("\n");
	PrintString(str3);
	printf("\n");

	return 0;
}
