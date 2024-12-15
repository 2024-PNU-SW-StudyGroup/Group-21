#include <stdio.h>

int main(void){
    int a[10];
    int b,c=0,s=0,r=0;
    for (int i=0; i<10; i++){
        scanf("%d", &b);
        a[i] = (b%42);
    }
    for (int i=0; i<10; i++){
        int s = 0;
        for (int k=i+1; k<10; k++){
            if (a[i]==a[k]){
                s++;
            }
        }
        if (s==0){
            r++;
        }
    }
    printf("%d", r);
    return 0;
}