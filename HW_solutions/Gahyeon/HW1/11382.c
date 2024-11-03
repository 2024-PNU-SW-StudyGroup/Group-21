// attempt 1
/*
#include <stdio.h>

int main() {

    int A, B, C; // 자료형 선택 오류
    scanf("%d" "%d" "%d", &A, &B, &C);

    printf("%d", A + B + C);

    return 0; 
}
*/

// attempt 2
#include <stdio.h>

int main() {

    long long A, B, C;
    scanf("%lld" "%lld" "%lld", &A, &B, &C);

    printf("%lld", A + B + C);

    return 0; 
}