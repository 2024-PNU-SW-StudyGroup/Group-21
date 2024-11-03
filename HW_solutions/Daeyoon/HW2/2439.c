#include <stdio.h>

int main(void){
    int a;
    scanf("%d", &a);
    for (int k = 1; k <= a; k++){
        for (int i = 0; i <= a - k - 1; i++){
            printf(" ");
        }
        for (int j = 1; j <=k  ; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}