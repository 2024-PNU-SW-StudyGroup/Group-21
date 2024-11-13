/*
n개의 정수가 주어질때 정수 v의 갯수 [-100, 100]
ex) 11
1 4 1 2 4 2 4 2 3 4 4
2
*/

#include <stdio.h>

int main(void) {
    int occur[201] = {0,};
    int n, tc, v;
    scanf("%d", &n);
    while(n--) {
        scanf("%d", &tc);
        occur[tc+100]++;
    }
    scanf("%d", &v);
    printf("%d\n", occur[v+100]);
    return 0;
}
