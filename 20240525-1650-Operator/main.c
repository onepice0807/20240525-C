#include <stdio.h>
#include <stdlib.h>

int main() {
    int size = 0;

    printf("�Է��� ������ ������ �Է��ϼ���; ");
    scanf_s("%d", &size);

    int* parray = (int*)malloc(sizeof(int) * size);   // �����޸� �Ҵ�

    for (int i = 0; i < size; i++) {
        parray[i] = i;
    }

    for (int i = 0; i < size; i++) {
        printf("parray[%d]= %d\n", i, parray[i]);
    }

    free(parray); // �����޸� ��ȯ
    return 0;
}