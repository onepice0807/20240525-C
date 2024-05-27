#include <stdio.h>

// ���ڿ��� ���� ���� ���� �Լ�
int strlen2(char* str) {
	int count = 0;

	while (*str) {
		count++;
		str++;
	}
	return count;
}

// ���ڿ��� �����ϴ� �Լ�
char* strcpy2(char* dest, char* src) {
	char* originPtr = dest;

	while (*src) {
		*dest = *src;
		src++;
		dest++;
	}

	*dest = "\0";

	return originPtr;
}

// ���ڿ� �����Լ�
char* strcat2(char* str1, char* str2) {
	char* originPtr = str1;

	while (*str1) str1++;
	while (*str2) {
		*str1 = *str2;
		str1++;
		str2++;
	}

	*str1 = '\0';

	return originPtr;
}

int main() {
	char str[] = "mons";
	char str2[] = "ster";
	char str3[40];
	char str4[] = "monster";

	// 1. strlen2 ���ڿ��� ���ڰ��� ���� �Լ�
	int count = strlen2(str);
	printf("str: %s �� ������ ������: %d\n", str, count);

	// 2. strcpy2 ���ڿ� �����ϴ� �Լ�
	strcpy2(str3, str);
	printf("str3: %s\n", str3);

	printf("str3: %s\n", strcpy2(str3, str));

	// 3. strcat ���ڿ� �����ϴ� �Լ�
	strcat2(str3, str2);
	printf("str3: %s\n", str3);


	return 0;
}

