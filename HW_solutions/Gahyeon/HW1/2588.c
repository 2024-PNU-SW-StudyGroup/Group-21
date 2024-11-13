// attempt 1
/*
#include <stdio.h>

int main() {

    int A, B;
    scanf("%d" "%d", &A, &B);

    printf("%d\n", A*(B%10));
    printf("%d\n", A*(B%100/10));
    printf("%d\n", A*(B%100)); // 연산자 사용 오류

    printf("%d\n", A*B);

    return 0;
}
*/

// attempt 2
#include <stdio.h>

int main() {

    int A, B;
    scanf("%d" "%d", &A, &B);

    printf("%d\n", A*(B%10));
    printf("%d\n", A*(B%100/10));
    printf("%d\n", A*(B/100));

    printf("%d\n", A*B);

    return 0;
}