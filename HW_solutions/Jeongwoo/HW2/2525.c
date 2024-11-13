#include <stdio.h>
int main(void)
{
    int h,m,a;
    scanf("%d %d",&h,&m);
    scanf("%d",&a);
    printf("%d %d",((h+(m+a)/60))%24,(m+a)%60);
    return 0;
}