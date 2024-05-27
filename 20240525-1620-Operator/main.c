#include <stdio.h>
#include <stdlib.h>

// 동적메모리
// 동적메모리 공간은 프로그램의 실행중에  메모리공간이 필요할때
// 함수(malloc, calloc,realloc)을 이용해서 os에 요엋을 해서 할당받는다.
// 동적메모리공간 할당 함수에서 리턴해주는 동적메모리공간의 주소값을 저장해서 저장한 주소로 할당받은
// 공간에 접근해서 메모리 공간을 사용하면 된다.
// 사용이 끝난 후에는 free 함수를 사용해서 반납처리를 해야한다.

int main() {
    int size = 10;

    // malloc은 동적메모리 공간을 할당받고 초기화를 하지 않는다.
    double* parray = (double*)malloc(sizeof(double) * size);   // 동적메모리 공간 할당

    printf("malloc\n");

    for (int i = 0; i < size; i++) {
        printf("parray[%d] = %lf\n", i, parray[i]);
    }

    free(parray);   // 동적메모리 반환

    printf("\n\n");

    // calloc은 할당한 수에 0으로 초기화를 한다.
    parray = (double*)calloc(size, sizeof(double));

    printf("calloc\n");
    for (int i = 0; i < size; i++) {
        printf("parray[%d] = %lf\n", i, parray[i]);
    }

    printf("\n\n");

    size = 20;

    printf("realloc\n");
    // realloc은 할당받은 메모리공간을 재할당할 때 사용한다.
    parray = (double*)realloc(parray, sizeof(double) * size);

    for (int i = 0; i < size; i++) {
        printf("parray[%d] = %lf\n", i, parray[i]);
    }

    printf("\n\nprintArray\n");

    // double형 저장공간을 int 저장공간으로 바꿈
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