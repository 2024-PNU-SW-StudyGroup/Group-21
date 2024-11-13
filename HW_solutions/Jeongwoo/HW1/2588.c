#include <stdio.h>

int main(void)
{
    int a,b;
    int sum = 0;
    scanf("%d %d", &a, &b);
    sum = a * b;
    int x, y, z;
    x = b % 10; // x에 1의 자릿수 할당
    b /= 10;
    y = b % 10; // y에 10의 자릿수 할당
    b /= 10;
    z = b; // z에 100의 자릿수 할당

    printf("%d\n", a*x);
    printf("%d\n", a*y);
    printf("%d\n", a*z);

    printf("%d\n", sum);
    return 0;
}

// 기초 수학 응용(나머지) 또는 배열 사용이지만,,,