#include <stdio.h>

int main(void){
    int a, b, c, d, e;
    scanf("%d %d %d", &a, &b, &c);
    if (a == b && b == c && c == a){
        d = 10000 + a * 1000;
    }
    else if (a == b || a == c){
        d = 1000 + a * 100;
    }
    else if (b == c){
        d = 1000 + b * 100;
    }
    else{
        if (a > b && a > c){
            e = a;
        }
        else if (b > a && b > c){
            e = b;
        }
        else if (c > a && c > b){
            e = c;
        }
        d = e * 100; // << else 컨디션으로 e가 선언되지 않는 일을 막아줘야함...
        // 그래도 good
    }
    printf("%d", d);
    return 0;
}