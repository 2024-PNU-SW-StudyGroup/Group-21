#include <stdio.h>

int main(void){
    int n;
    scanf("%d", &n);
    int v;
    int a[100];
    int b=0;
    for (int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    scanf("%d", &v);
    for (int k=0; k<n; k++){
        if (a[k]==v)
            b++;
    }
    printf("%d", b);
    return 0;
}