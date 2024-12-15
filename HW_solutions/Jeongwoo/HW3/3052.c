#include <stdio.h>

int main(void)
{
    int check[42] = {0,};
    int n, cnt=0;
    for(int i=0; i<10; i++) {
        scanf("%d", &n);
        check[n%42]++;
    }
    for (int i=0; i<42; i++) {
        if (check[i] != 0) {
            cnt ++;
        }
    }
    printf("%d", cnt);
}