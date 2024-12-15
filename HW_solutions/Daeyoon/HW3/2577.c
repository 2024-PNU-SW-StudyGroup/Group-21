#include <stdio.h>

int main(void){
    int A, B, C;
    int a;
    scanf("%d %d %d", &A, &B, &C);
    a = A * B * C;
    int b[10]={0, };
    for (int i=a; i>0; i/=10){
        b[i%10]++;
    }
    for (int i=0; i<10; i++){
        printf("%d\n", b[i]);
    }
    return 0;
}