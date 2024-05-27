#include <stdio.h>
// 자동변수 생성과 소멸 원리

void Func3(int value) {
	int a = 100;
}

void Func2(int value) {
	int b = 200;
	Func3(b);
	int c = 1000;
}

void Func(int value) {
	int c = 300;
	Func2(c);
}

int main() {
	int a = 200;
	Func(a);
	int c = 1000;

	return 0;

}