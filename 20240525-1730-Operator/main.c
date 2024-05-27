#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//�Լ� ������

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

// �Լ��� �ּҰ��� �����ϴ� ������ Ÿ���� �ִٴ� ����
// �ٸ� �Լ��� ���ڰ����� �Լ��� �ּҰ��� ������ �� �ִٴ� �ǹ�
float calculator(float(*pfunc)(float, float), float a, float b) {
    return pfunc(a, b);
}

int main() {
    // �Լ��� ����Ǵ� ��? ��� ��ġ�ϴ°�?
    // �Լ��� �޸𸮿� �ִ�.
    // �Լ��� �޸𸮿� ��ġ�ϱ⶧���� �ּҰ��� ������ �ִ�.
    // �Լ��� �ּҰ��� ������ �����Ѱ�?
    // �Լ��� �ּҰ��� �����ϴ� ������ Ÿ���� �Լ�������

    printf("&add = %p\n", add);

    float(*pfunc)(float, float); // �Լ� ������ ����

    pfunc = add;

    float ret2 = pfunc(10.1f, 20.2f);
    printf("%f + %f = %f\n", 10.1f, 20.2f);

    float a = 10.23f;
    float b = 3.45f;

    float ret = calculator(add, a, b);
    printf("%f + %f = %f\n", a, b, ret);

    ret = calculator(sub, a, b);
    printf("%f - %f = %f\n", a, b, ret);

    float(*pfuncArray[4])(float, float);   // �Լ� ������ �迭
    char operArray[4] = { '+', '-', 'x', '/' };
    pfuncArray[0] = add;
    pfuncArray[1] = sub;
    pfuncArray[2] = mul;
    pfuncArray[3] = div;

    printf("\n\n�Լ� ������ �迭�� �̿��� �ϰ� ����\n");

    for (int i = 0; i < 4; i++) {
        printf("%f %c %f = %f\n", a, operArray[i], b, pfuncArray[i](a, b));
    }

    return 0;
}