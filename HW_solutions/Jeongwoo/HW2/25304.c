#include <stdio.h>
int main(void)
{
    int t,s,a,b;
    int f = 0;
    scanf("%d",&s);
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%d %d",&a,&b);
        f = f+(a*b);
    }
    printf(s==f?"Yes":"No");
    return 0;
}