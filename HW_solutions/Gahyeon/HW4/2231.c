#include <stdio.h>

int digit_sum(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    int N, i, result = 0;

    scanf("%d", &N);

    for (i = 1; i < N; i++) {
        if (i + digit_sum(i) == N) {
            result = i;
            break;
        }
    }

    printf("%d\n", result);

    return 0;
}