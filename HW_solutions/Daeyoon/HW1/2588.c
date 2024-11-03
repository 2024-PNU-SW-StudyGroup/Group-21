#include <stdio.h>

int main(void){
    int a,b = 0;
    scanf("%d %d", &a, &b);
    int c = b%10;
    int d = (b/10)%10;
    int e = (b/100);
    printf("%d\n", a*c);
    printf("%d\n", a*d);
    printf("%d\n", a*e);
    printf("%d\n", a*c + a*d*10 + a*e*100);
    return 0;
}