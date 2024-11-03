#include <stdio.h>

int main() {
    int a, b, tc;
    scanf("%d %d", &a, &b);
    for (int i=0; i<a; i++) {
        scanf("%d", &tc);
        if (tc < b) printf("%d ", tc);
    }
}