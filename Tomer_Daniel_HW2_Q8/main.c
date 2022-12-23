#include <stdio.h>
#include "Question8.h"

int main(void) {
    int A[SIZE][SIZE] = { 0 };
    init(SIZE, A);
    printf("%d", DNF(A));
 

    return 0;
}