// attempt 1
/*
#include <stdio.h>

int main(void){
    int a, b ;
    scanf("&d %d", &a &b);
    if (a > b){
        printf(>);
    }
    else if (a < b) {
        printf(<);
    }
    else {
        printf(==); << "" 없음...
    }
    return 0;
}
*/

// attempt 2
#include <stdio.h>

int main(void){
    int a, b ;
    scanf("%d %d", &a, &b);
    if (a > b){
        printf(">");
    }
    else if (a < b) {
        printf("<");
    }
    else {
        printf("==");
    }
    return 0;
}