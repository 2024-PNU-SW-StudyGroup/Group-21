#include <stdio.h>

int main(void){
    int a, b, c, d;
    scanf("%d %d", &a, &b);
    scanf("%d", &c);
    if (b+c >= 60){
        d = (b + c)/60;
        a = a + d;
        b = b + c - 60*d;
    }
    else {
        b = b + c;
    }
    if (a >= 24){
        a = a % 24;
    }
    printf("%d %d", a, b);
    return 0;
}