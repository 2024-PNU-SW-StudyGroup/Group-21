#include <stdio.h>

int generate(int n) {
    int res = n;
    for(; n; n /= 10) {
        res += n%10;
    }
    return res;
}

int main(void) {
    int n, tmp;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        tmp = generate(i);
        if (n == tmp) {
            printf("%d\n", i);
            return 0;
        } 
    }
    printf("0");
    return 0;
}