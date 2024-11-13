// attempt 1
/*
#include <stdio.h>

int main(void){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d\n", (a+b)%c);
    printf("%d\n", ((a%c)+(b%c)%c));
    printf("%d\n", (a*b)%c);
    printf("%d\n", ((a%c)*(b%c))%c);
    return 0;
}
*/

// attempt 2
/*
#include <stdio.h>

int main(void){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d\n", (a+b)%c);
    printf("%d\n", ((a%c)+(b%c)%c)); // 이곳에 연산순서 error
    printf("%d\n", (a*b)%c);
    printf("%d\n", ((a%c)*(b%c))%c);
    return 0;
}
*/

// attempt3
#include <stdio.h>

int main(void){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d\n", (a+b)%c);
    printf("%d\n", ((a%c)+(b%c))%c);
    printf("%d\n", (a*b)%c);
    printf("%d\n", ((a%c)*(b%c))%c);
    return 0;
}