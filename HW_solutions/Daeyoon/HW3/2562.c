#include <stdio.h>

int main(void){
    int a[9];
    int b=0;
    int c;
    for (int i=0; i<9; i++){
        scanf("%d", &a[i]);
    }
    c = a[0];
    for (int i=0; i<9; i++){
        if (c < a[i]){
            c = a[i];
            b = i;
        }
    }
    printf("%d\n%d", c, b+1);
    return 0;
}