#include <stdio.h>

int main() {
    int a,b,i,c;
    scanf("%d",&i);

    for (int k=1;k<=i;k++){
        scanf("%d %d",&a,&b);
        c = a+b;
        printf("%d\n",c);
    }
    return 0;
}