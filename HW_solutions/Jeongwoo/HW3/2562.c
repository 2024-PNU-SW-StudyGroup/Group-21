#include <stdio.h>

int main(void)
{
    int n=9,l,m=1,c;
    while(n--){
        scanf("%d",&l);
        if(l>m){
            m=l;
            c=9-n;
        }
    }
    printf("%d\n%d",m,c);
}