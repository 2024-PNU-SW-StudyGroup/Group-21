#include <stdio.h>

int main() {
    int max = 0, index = 0, num;

    for (int i = 1; i <= 9; i++) {
        scanf("%d", &num);

        if (num > max) {
            max = num;
            index = i;
        }
    }

    printf("%d\n", max);
    printf("%d\n", index);

    return 0;
}