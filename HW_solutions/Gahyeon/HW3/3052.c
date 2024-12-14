#include <stdio.h>

int main() {
    int num, count = 0;
    int remainders[42] = {0};

    for (int i = 0; i < 10; i++) {
        scanf("%d", &num);
        remainders[num % 42] = 1;
    }

    for (int i = 0; i < 42; i++) count += remainders[i];

    printf("%d\n", count);

    return 0;
}