#include <stdio.h>

int main(void) {
    int occur[201] = {0,};
    int n, tc, v;
    scanf("%d", &n);
    while(n--) {
        scanf("%d", &tc);
        occur[tc+100]++;
    }
    scanf("%d", &v);
    printf("%d\n", occur[v+100]);
    return 0;
}