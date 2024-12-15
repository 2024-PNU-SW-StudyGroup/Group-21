#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int i,n,m,a,b,t;
    scanf("%d%d",&n,&m);
    int *l=(int*)malloc((n+1)*sizeof(int));
    for(i=1;i<=n;i++){
        l[i]=i;
    }
    while(m--){
        scanf("%d%d",&a,&b);
        for(i=0;i<=(b-a)/2;i++){
            t=l[a+i];
            l[a+i]=l[b-i];
            l[b-i]=t;
        }
    }
    for(i=1;i<=n;i++)
    {
        printf("%d ",l[i]);
    }
    free(l);
}