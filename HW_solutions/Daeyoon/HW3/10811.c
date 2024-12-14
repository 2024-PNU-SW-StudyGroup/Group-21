#include <stdio.h>

int main(void){
    int s[100] = {0,};
    int N, M, a, b, c;
    scanf("%d %d", &N, &M);
    for (c = 1; c <= N; c++){
        s[c] = c;
    }
    for (c = 0; c < M; c++){
        scanf("%d %d", &a, &b);
        while (a < b) {
            int t = s[a];
            s[a] = s[b];
            s[b] = t;
            a += 1;
            b -= 1;
        }
    }
    for (c = 1; c <= N; c++){
        printf("%d ", s[c]);
    }

    return 0;
}
