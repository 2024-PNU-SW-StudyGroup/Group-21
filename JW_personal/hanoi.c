#include <stdio.h>

void hanoi_recur(int n, int x, int y) {
    int z = 6 - x - y;
    if (n == 1) {
        printf("%d %d\n", x, y);
        return;
    }
    if (n == 2) {
        printf("%d %d\n", x, z);
        printf("%d %d\n", x, y);
        printf("%d %d\n", z, y);
        return;
    }
    hanoi_recur(n-1, x, z);
    hanoi_recur(1, x, y);
    hanoi_recur(n-1, z, y);
    return;
}

int main(void) {
    int n;
    scanf("%d", &n);
    char pows[32] = {0,};
    int carry = 0, start = 0;
    pows[0] = 1;
    for(int i=0; i<n; i++) {
        for(int j=0; j<31; j++) {
            pows[j] = pows[j]*2 + carry;
            if (pows[j] >= 10) {
                pows[j] %= 10;
                carry = 1;
            }
            else {
                carry = 0;
            }
        }
    }
    pows[0]--;
    for(int i=31; i>=0; i--) {
        if (start == 0 && pows[i] == 0) {
            continue;
        }
        else {
            start = 1;
        }
        printf("%d", pows[i]);
    }
    printf("\n");
    if (n < 21) {
        hanoi_recur(n, 1, 3);
    }
    return 0;
}