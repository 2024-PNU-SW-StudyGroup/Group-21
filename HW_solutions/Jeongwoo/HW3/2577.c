#include <stdio.h>

int main(void) {
    int occur[10] = {0,};
	int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    int tot = a*b*c;
    while(tot) {
        occur[tot%10]++;
        tot /= 10;
    }
    for(int i = 0; i < 10; i++)
        printf("%d\n", occur[i]);
	return 0;
}