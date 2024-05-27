#include <stdio.h>
// 메인 함수 (진입점함수, entry point)
// 명령행인자
// int argc: 명령행 인자의 갯수
// char* argv[] : 명령행 인자로 전달된 문자열의 저장된 곳의 주소갓이 저장된 배열

int main(int argc, char* argv[]) {
	
	printf("argc: %d\n", argc);

	for (int i = 0; i < argc; i++) {
		printf("argv[%d] = %s\n", i, argv[i]);
	}

	getch();

	return 0;
}