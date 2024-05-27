#include <stdio.h>

// 문자열의 문자 갯수 세는 함수
int strlen2(char* str) {
	int count = 0;

	while (*str) {
		count++;
		str++;
	}
	return count;
}

// 문자열을 복사하는 함수
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

// 문자열 병함함수
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

	// 1. strlen2 문자열의 문자갯수 세는 함수
	int count = strlen2(str);
	printf("str: %s 의 문자의 갯수는: %d\n", str, count);

	// 2. strcpy2 문자열 복사하는 함수
	strcpy2(str3, str);
	printf("str3: %s\n", str3);

	printf("str3: %s\n", strcpy2(str3, str));

	// 3. strcat 문자열 병합하는 함수
	strcat2(str3, str2);
	printf("str3: %s\n", str3);


	return 0;
}

