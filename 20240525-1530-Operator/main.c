#include <stdio.h>
#include <string.h>
// 문자열.
// C언어에서 문자열 함수를 만들때
// 문자배열의 선두번지 주소값고 배열의 사이즈를 같이 전달해야 하는 불편함이 있다.



// 문자배열 출력함수
void PrintStringArray(char* str, int size) {
	for (int i = 0; i < size; i++) {
		putchar(str[i]); // 한문자를 출력하는 함수
	}
}

// 문자열 출력함수

void PrintString(char* pstr) {
	while (*pstr) {
		putchar(*pstr);
		pstr++;
	}
}


int main() {
	char str[] = { 'M', 'O', 'N' }; // 문자배열
	char str2[] = "MON"; // 문자열
	char str3[] = { 'M', 'O', 'N', '\0' }; // 문자열 \0(0) 널종료문자

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
