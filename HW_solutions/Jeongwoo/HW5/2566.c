#include <stdio.h>

int main(void) {
    int n,m=0,c=0;
    int d[81];
    for(int i=0;i<81;i++){
        scanf("%d",&n);
        if(n>m){
            m=n;
            c=i;
        }
    } 
    printf("%d\n%d %d",m,c/9+1,c%9+1);
}