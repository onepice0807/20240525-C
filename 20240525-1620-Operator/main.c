#include <stdio.h>
#include <stdlib.h>

// �����޸�
// �����޸� ������ ���α׷��� �����߿�  �޸𸮰����� �ʿ��Ҷ�
// �Լ�(malloc, calloc,realloc)�� �̿��ؼ� os�� ��h�� �ؼ� �Ҵ�޴´�.
// �����޸𸮰��� �Ҵ� �Լ����� �������ִ� �����޸𸮰����� �ּҰ��� �����ؼ� ������ �ּҷ� �Ҵ����
// ������ �����ؼ� �޸� ������ ����ϸ� �ȴ�.
// ����� ���� �Ŀ��� free �Լ��� ����ؼ� �ݳ�ó���� �ؾ��Ѵ�.

int main() {
    int size = 10;

    // malloc�� �����޸� ������ �Ҵ�ް� �ʱ�ȭ�� ���� �ʴ´�.
    double* parray = (double*)malloc(sizeof(double) * size);   // �����޸� ���� �Ҵ�

    printf("malloc\n");

    for (int i = 0; i < size; i++) {
        printf("parray[%d] = %lf\n", i, parray[i]);
    }

    free(parray);   // �����޸� ��ȯ

    printf("\n\n");

    // calloc�� �Ҵ��� ���� 0���� �ʱ�ȭ�� �Ѵ�.
    parray = (double*)calloc(size, sizeof(double));

    printf("calloc\n");
    for (int i = 0; i < size; i++) {
        printf("parray[%d] = %lf\n", i, parray[i]);
    }

    printf("\n\n");

    size = 20;

    printf("realloc\n");
    // realloc�� �Ҵ���� �޸𸮰����� ���Ҵ��� �� ����Ѵ�.
    parray = (double*)realloc(parray, sizeof(double) * size);

    for (int i = 0; i < size; i++) {
        printf("parray[%d] = %lf\n", i, parray[i]);
    }

    printf("\n\nprintArray\n");

    // double�� ��������� int ����������� �ٲ�
    int* pintArray = (int*)parray;

    for (int i = 0; i < size * 2; i++) {
        pintArray[i] = i;
    }

    for (int i = 0; i < size * 2; i++) {
        printf("pintArray[%d] = %d\n", i, pintArray[i]);
    }

    free(pintArray);



    return 0;
}