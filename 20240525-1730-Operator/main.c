#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//함수 포인터

float add(float a, float b) {
    return a + b;
}

float sub(float a, float b) {
    return a - b;
}

float mul(float a, float b) {
    return a * b;
}

float div(float a, float b) {
    return a / b;
}

// 함수의 주소값을 저장하는 데이터 타입이 있다는 것은
// 다른 함수의 인자값으로 함수의 주소값을 전달할 수 있다는 의미
float calculator(float(*pfunc)(float, float), float a, float b) {
    return pfunc(a, b);
}

int main() {
    // 함수가 저장되는 곳? 어디에 위치하는가?
    // 함수도 메모리에 있다.
    // 함수도 메모리에 위치하기때문에 주소값을 가지고 있다.
    // 함수의 주소값도 저장이 가능한가?
    // 함수의 주소값을 저장하는 데이터 타입을 함수포인터

    printf("&add = %p\n", add);

    float(*pfunc)(float, float); // 함수 포인터 변수

    pfunc = add;

    float ret2 = pfunc(10.1f, 20.2f);
    printf("%f + %f = %f\n", 10.1f, 20.2f);

    float a = 10.23f;
    float b = 3.45f;

    float ret = calculator(add, a, b);
    printf("%f + %f = %f\n", a, b, ret);

    ret = calculator(sub, a, b);
    printf("%f - %f = %f\n", a, b, ret);

    float(*pfuncArray[4])(float, float);   // 함수 포인터 배열
    char operArray[4] = { '+', '-', 'x', '/' };
    pfuncArray[0] = add;
    pfuncArray[1] = sub;
    pfuncArray[2] = mul;
    pfuncArray[3] = div;

    printf("\n\n함수 포인터 배열을 이용한 일괄 연산\n");

    for (int i = 0; i < 4; i++) {
        printf("%f %c %f = %f\n", a, operArray[i], b, pfuncArray[i](a, b));
    }

    return 0;
}