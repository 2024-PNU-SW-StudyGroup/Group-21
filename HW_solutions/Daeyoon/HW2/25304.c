#include <stdio.h>

int main(void){
    int X, N, a, b, c=0;
    scanf("%d", &X);
    scanf("%d", &N);
    for (int i=0; i<N; i++){
        scanf("%d %d", &a, &b);
        c = c + a * b;
    }
    if (X == c){
        printf("Yes");
    }
    else {
        printf("No");
    }
    return 0;
}